#include <iostream>
#include "symbol_table_linkedlist.h"
#include "symbol_table_array.h"
#include "binary_search.h"
using namespace std;

int main() {
    cout << "=== Symbol Table (Linked List) ===" << endl;
    SymbolTableLinkedList st1;
    st1.insert("a", 10);
    st1.insert("b", 20);
    st1.insert("c", 30);
    st1.display();

    int val;
    if (st1.find("b", val)) cout << "Tim thay b = " << val << endl;
    st1.remove("a");
    cout << "Sau khi xoa a:" << endl;
    st1.display();

    cout << "\n=== Symbol Table (Array) ===" << endl;
    SymbolTableArray st2;
    st2.insert("x", 1);
    st2.insert("y", 2);
    st2.insert("z", 3);
    st2.display();
    st2.remove("y");
    cout << "Sau khi xoa y:" << endl;
    st2.display();

    cout << "\n=== Binary Search ===" << endl;
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 7;
    int idx = binarySearch(arr, target);
    if (idx != -1)
        cout << "Tim thay " << target << " tai vi tri " << idx << endl;
    else
        cout << "Khong tim thay " << target << endl;

    return 0;
}
