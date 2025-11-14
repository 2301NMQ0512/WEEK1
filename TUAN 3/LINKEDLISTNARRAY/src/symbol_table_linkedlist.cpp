#include "symbol_table_linkedlist.h"
#include <iostream>
using namespace std;

SymbolTableLinkedList::SymbolTableLinkedList() : head(nullptr) {}

SymbolTableLinkedList::~SymbolTableLinkedList() {
    Node* curr = head;
    while (curr) {
        Node* tmp = curr;
        curr = curr->next;
        delete tmp;
    }
}

void SymbolTableLinkedList::insert(const string& key, int value) {
    Node* curr = head;
    while (curr) {
        if (curr->key == key) {
            curr->value = value;
            return;
        }
        curr = curr->next;
    }
    Node* newNode = new Node(key, value);
    newNode->next = head;
    head = newNode;
}

bool SymbolTableLinkedList::find(const string& key, int& value) {
    Node* curr = head;
    while (curr) {
        if (curr->key == key) {
            value = curr->value;
            return true;
        }
        curr = curr->next;
    }
    return false;
}

void SymbolTableLinkedList::remove(const string& key) {
    Node* curr = head;
    Node* prev = nullptr;

    while (curr) {
        if (curr->key == key) {
            if (prev)
                prev->next = curr->next;
            else
                head = curr->next;
            delete curr;
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

void SymbolTableLinkedList::display() {
    Node* curr = head;
    while (curr) {
        cout << curr->key << " : " << curr->value << endl;
        curr = curr->next;
    }
}
