#ifndef SYMBOL_TABLE_ARRAY_H
#define SYMBOL_TABLE_ARRAY_H

#include <string>
#include <vector>
using namespace std;

struct Entry {
    string key;
    int value;
};

class SymbolTableArray {
private:
    vector<Entry> table;

public:
    void insert(const string& key, int value);
    bool find(const string& key, int& value);
    void remove(const string& key);
    void display();
};

#endif
