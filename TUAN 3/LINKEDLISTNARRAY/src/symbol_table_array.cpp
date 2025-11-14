#include "symbol_table_array.h"
#include <iostream>
using namespace std;

void SymbolTableArray::insert(const string& key, int value) {
    for (auto& e : table) {
        if (e.key == key) {
            e.value = value;
            return;
        }
    }
    table.push_back({key, value});
}

bool SymbolTableArray::find(const string& key, int& value) {
    for (auto& e : table) {
        if (e.key == key) {
            value = e.value;
            return true;
        }
    }
    return false;
}

void SymbolTableArray::remove(const string& key) {
    for (auto it = table.begin(); it != table.end(); ++it) {
        if (it->key == key) {
            table.erase(it);
            return;
        }
    }
}

void SymbolTableArray::display() {
    for (auto& e : table) {
        cout << e.key << " : " << e.value << endl;
    }
}
