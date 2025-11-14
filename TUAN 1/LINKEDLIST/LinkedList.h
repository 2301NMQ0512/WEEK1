#ifndef LINKEDLIST_INCLUDED
#define LINKEDLIST_INCLUDED

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d, Node* n = NULL) {
        data = d;
        next = n;
    }
};

struct LinkedList {
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void accessList(int index) {
        if (index <= 0) {
            cout << "Invalid index" << endl;
            return;
        }
        Node* a = head;
        for (int i = 1; i < index && a != NULL; i++) {
            a = a->next;
        }
        if (a == NULL) {
            cout << "Cannot access" << endl;
        } else {
            cout << a->data << endl;
        }
    }

    void addFirst(int x) {
        Node* newNode = new Node(x, head);
        head = newNode;
    }

    void addLast(int x) {
        Node* newNode = new Node(x);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* a = head;
        while (a->next != NULL) {
            a = a->next;
        }
        a->next = newNode;
    }

    void insertI(int index, int x) {
        if (index <= 0) {
            cout << "Invalid index" << endl;
            return;
        }
        if (index == 1) {
            addFirst(x);
            return;
        }
        Node* a = head;
        for (int i = 1; i < index - 1 && a != NULL; i++) {
            a = a->next;
        }
        if (a == NULL) {
            cout << "Invalid index" << endl;
            return;
        }
        Node* newNode = new Node(x, a->next);
        a->next = newNode;
    }

    void deleteFirst() {
        if (head == NULL) {
            cout << "Cannot delete" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteLast() {
        if (head == NULL) {
            cout << "Cannot delete" << endl;
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        Node* prev = NULL;
        Node* cur = head;
        while (cur->next != NULL) {
            prev = cur;
            cur = cur->next;
        }
        prev->next = NULL;
        delete cur;
    }

    void deleteI(int index) {
        if (index <= 0) {
            cout << "Invalid index" << endl;
            return;
        }
        if (index == 1) {
            deleteFirst();
            return;
        }
        Node* prev = NULL;
        Node* cur = head;
        for (int i = 1; i < index && cur != NULL; i++) {
            prev = cur;
            cur = cur->next;
        }
        if (cur == NULL) {
            cout << "Invalid index" << endl;
            return;
        }
        prev->next = cur->next;
        delete cur;
    }

    void print() {
        if (head == NULL) {
            cout << "Nothing" << endl;
            return;
        }
        Node* a = head;
        while (a != NULL) {
            cout << a->data << " ";
            a = a->next;
        }
        cout << endl;
    }

    void reversePrint(Node* node) {
        if (node == NULL) return;
        reversePrint(node->next);
        cout << node->data << " ";
    }
};

#endif
