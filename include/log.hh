#pragma once

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <memory>

class Logger
{
public:
    static std::shared_ptr<spdlog::logger> &getInstance()
    {
        static std::shared_ptr<spdlog::logger> instance = spdlog::stdout_color_mt("console");
        instance->set_pattern("[%H:%M:%S] [%^%l%$] %v");
        return instance;
    }

    static void debug(const std::string &message)
    {
        getInstance()->debug(message);
    }

    static void info(const std::string &message)
    {
        getInstance()->info(message);
    }

    static void warn(const std::string &message)
    {
        getInstance()->warn(message);
    }

    static void error(const std::string &message)
    {
        getInstance()->error(message);
    }

    static void critical(const std::string &message)
    {
        getInstance()->critical(message);
    }
};
