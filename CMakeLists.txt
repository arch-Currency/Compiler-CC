cmake_minimum_required(VERSION 3.25)
project(Compiler-CC)

message(STATUS "CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")
message(STATUS "CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(LIB_DIR ${CMAKE_SOURCE_DIR}/lib)
set(BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)

# flex 相关变量
set(FLEX_OUTPUT ${SOURCE_DIR}/lexer/lex.cpp)
set(FLEX_FILE ${SOURCE_DIR}/lexer/lex.l)

# bison 相关变量
set(BISON_OUTPUT ${SOURCE_DIR}/parser/parse.cc)
set(BISON_HEADER ${SOURCE_DIR}/parser/parse.hh)
set(BISON_FILE ${SOURCE_DIR}/parser/parse.yy)

list(APPEND CMAKE_PREFIX_PATH "${LIB_DIR}/spdlog")
set(CMAKE_INSTALL_PREFIX ${BINARY_DIR})

find_program(FLEX_EXECUTABLE flex)
if (NOT FLEX_EXECUTABLE)
    message(FATAL_ERROR "Flex not found!")
endif ()

find_program(BISON_EXECUTABLE bison)
if (NOT BISON_EXECUTABLE)
    message(FATAL_ERROR "Bison not found!")
endif ()

find_package(spdlog REQUIRED)
find_package(nlohmann_json REQUIRED)

include_directories(${LIB_DIR}/spdlog/include)

option(BISON "Compile bison file" OFF)
if (BISON)
    add_custom_target(generate_parser ALL
            DEPENDS ${BISON_OUTPUT}
    )
    add_custom_command(
            OUTPUT ${BISON_OUTPUT}
            COMMAND ${BISON_EXECUTABLE} -d -Wcounterexamples -o ${BISON_OUTPUT} ${BISON_FILE}
            DEPENDS ${BISON_FILE}
            COMMENT "Generating parser from bison.yy"
            COMMAND mv ${BISON_HEADER} ${INCLUDE_DIR}
    )
endif ()

option(FLEX "Compile flex file" OFF)
if (FLEX)
    add_custom_target(generate_lexer ALL
            DEPENDS ${FLEX_OUTPUT}
    )
    add_custom_command(
            OUTPUT ${FLEX_OUTPUT}
            COMMAND ${FLEX_EXECUTABLE} -o ${FLEX_OUTPUT} ${FLEX_FILE}
            DEPENDS ${FLEX_FILE}
            COMMENT "Generating lexer from lex.l"
    )
endif ()

file(GLOB_RECURSE FILE ${SOURCE_DIR}/*.cpp ${SOURCE_DIR}/*.cc)
file(GLOB_RECURSE HEADER ${INCLUDE_DIR}/*.hh ${INCLUDE_DIR}/*.hpp ${INCLUDE_DIR}/*.h)

list(REMOVE_ITEM FILE ${SOURCE_DIR}/parser/parser.cpp)

# add_executable(lexer ${FLEX_OUTPUT} ${SOURCE_DIR}/lexer/lexer.cpp)
add_executable(table ${FILE} ${HEADER})

target_link_libraries(table PRIVATE
        spdlog::spdlog
        nlohmann_json::nlohmann_json
)
target_include_directories(table PRIVATE
        ${INCLUDE_DIR}
        ${LIB_DIR}/spdlog/include
)

install(TARGETS table RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/table)


add_custom_target(clean-all
        COMMAND rm -rf *
        COMMENT "Removing all files in the build directory"
)