#pragma once
#include <iostream>
#include <map>
#include <variant>
#include "log.hh"

class argsNode;
template<class T>
using ptr = std::unique_ptr<T>;

struct visitor {
    void operator()(int i) const { std::cout << "integer: " << i << std::endl; }
    void operator()(const std::string &str) const { std::cout << "string: " << str << std::endl; }
    void operator()(float f) const { std::cout << "float: " << f << std::endl; }
    void operator()(char c) const { std::cout << "char: " << c << std::endl; }
    void operator()(std::monostate) const { std::cout << std::endl; }
};

class expNode {
public:
    expNode() : var(std::monostate{}) {}
    ~expNode() = default;
    void print(int i);
    std::string type;
    std::variant<std::monostate, int, float, char, std::string> var;
    std::vector<ptr<expNode>> children;
    std::vector<ptr<expNode>> args;
};

class varDecNode {
public:
    varDecNode() = default;
    ~varDecNode() = default;
    void print(int i);
    std::vector<int> dim;
    std::string name;
};

class externDefNode {
public:
    externDefNode() = default;
    ~externDefNode() = default;
    virtual void print(int i){};
};

class externVarDefNode final : public externDefNode {
public:
    externVarDefNode() = default;
    ~externVarDefNode() = default;
    void print(int i) override;
    std::string type;
    std::vector<ptr<varDecNode>> children;
};

class funcDecNode {
public:
    funcDecNode() = default;
    ~funcDecNode() = default;
    void print(int i);
    std::string name;
    std::vector<std::pair<std::string, ptr<varDecNode>>> params;
};

class programNode {
public:
    programNode() = default;
    ~programNode() = default;
    void print(int i);
    std::vector<ptr<externDefNode>> children;
};

class stmtNode {
public:
    stmtNode() = default;
    ~stmtNode() = default;
    virtual void print(int i);
    std::string type;
    ptr<expNode> exp;
};

class whileNode : public stmtNode {
public:
    whileNode() = default;
    ~whileNode() = default;
    ptr<expNode> condition;
    ptr<stmtNode> body;
    void print(int i);
};

class forNode : public stmtNode {
public:
    forNode() = default;
    ~forNode() = default;
    void print(int i);
    ptr<expNode> initial, condition, change;
    ptr<stmtNode> body;
};

class ifNode : public stmtNode {
public:
    ifNode() = default;
    ~ifNode() = default;
    void print(int i);
    ptr<expNode> condition;
    ptr<stmtNode> body, else_body;
};

class innerVarDecNode {
public:
    innerVarDecNode() : assign_body{std::nullopt} {}
    ~innerVarDecNode() = default;
    void print(int i);
    ptr<varDecNode> varDec;
    std::optional<ptr<expNode>> assign_body;
};

class innerVarDefNode {
public:
    innerVarDefNode() = default;
    ~innerVarDefNode() = default;
    void print(int i);
    std::string type;
    std::vector<ptr<innerVarDecNode>> inner_dec;
};

class cmpdNode : public stmtNode {
public:
    cmpdNode() = default;
    ~cmpdNode() = default;
    void print(int i);
    std::vector<ptr<innerVarDefNode>> def_list;
    std::vector<ptr<stmtNode>> stmt_list;
};

class externFuncDefNode final : public externDefNode {
public:
    externFuncDefNode() = default;
    ~externFuncDefNode() = default;
    void print(int i) override;
    std::string type;
    ptr<funcDecNode> funcDec;
    ptr<cmpdNode> compound;
};
