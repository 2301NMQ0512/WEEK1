#ifndef SYMBOL_TABLE_LINKEDLIST_H
#define SYMBOL_TABLE_LINKEDLIST_H

#include <string>
using namespace std;

struct Node {
    string key;
    int value;
    Node* next;
    Node(string k, int v) : key(k), value(v), next(nullptr) {}
};

class SymbolTableLinkedList {
private:
    Node* head;

public:
    SymbolTableLinkedList();
    ~SymbolTableLinkedList();
    void insert(const string& key, int value);
    bool find(const string& key, int& value);
    void remove(const string& key);
    void display();
};

#endif
