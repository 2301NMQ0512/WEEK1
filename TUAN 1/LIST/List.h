#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>
using namespace std;

struct List {
    int a[100];
    int size;

    List() {
        size = 0;
    }

    void accessList(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index" << endl;
        } else {
            cout << a[index] << endl;
        }
    }

    void addFirst(int x) {
        if (size >= 100) {
            cout << "List full" << endl;
            return;
        }
        for (int i = size; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = x;
        size++;
    }

    void addLast(int x) {
        if (size >= 100) {
            cout << "List full" << endl;
            return;
        }
        a[size++] = x;
    }

    void insertI(int index, int x) {
        if (index < 0 || index > size || size >= 100) {
            cout << "Invalid index" << endl;
            return;
        }
        for (int i = size; i > index; i--) {
            a[i] = a[i - 1];
        }
        a[index] = x;
        size++;
    }

    void deleteFirst() {
        if (size == 0) {
            cout << "Empty list" << endl;
            return;
        }
        for (int i = 0; i < size - 1; i++) {
            a[i] = a[i + 1];
        }
        size--;
    }

    void deleteLast() {
        if (size == 0) {
            cout << "Empty list" << endl;
            return;
        }
        size--;
    }

    void deleteI(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index" << endl;
            return;
        }
        for (int i = index; i < size - 1; i++) {
            a[i] = a[i + 1];
        }
        size--;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    void printReverse() {
        for (int i = size - 1; i >= 0; i--) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

#endif
