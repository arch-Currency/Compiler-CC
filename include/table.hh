#ifndef TABLE_HH
#define TABLE_HH
#include <map>
#include <memory>
#include <optional>
#include "ast.hh"
using std::map;

struct FuncInfo {
    void print() const;
    std::string return_type;
    std::vector<std::string> params;
};

struct VarInfo {
    void print() const;
    std::string type;
    std::optional<std::vector<int>> dim;
};

struct InfoVisitor {
    void operator()(const FuncInfo &func) const { func.print(); }
    void operator()(const VarInfo &var) const { var.print(); }
};

class Table {
public:
    explicit Table(Table *table, int i) : front{table}, next{nullptr}, layer{i + 1} {}
    explicit Table(int i) : front{nullptr}, next{nullptr}, layer{i} {}
    ~Table() { delete next; }
    void insert(std::pair<std::string, std::variant<FuncInfo, VarInfo>> &item) { table.insert(std::move(item)); }
    void insert(std::pair<std::string, std::variant<FuncInfo, VarInfo>> &&item) { table.insert(std::move(item)); }
    [[nodiscard]] bool find(const std::string &key) { return table.contains(key); }
    std::optional<std::map<std::string, std::variant<FuncInfo, VarInfo>>::iterator> search(const std::string &key) {
        Table *cur = this;
        while (cur) {
            auto it = cur->table.find(key);
            if (it != cur->table.end()) {
                return it;
            }
            cur = cur->front;
        }
        return std::nullopt;
    }
    void print();
    [[nodiscard]] int Layer() const { return layer; }

    Table *front;
    Table *next;

private:
    int layer;
    std::map<std::string, std::variant<FuncInfo, VarInfo>> table;
};

std::string type_exp(expNode *e, Table *t);

#endif // TABLE_HH
