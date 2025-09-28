#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList list;

    cout << "Test LinkedList" << endl;
    list.addFirst(10);
    list.addFirst(20);
    list.addLast(5);
    list.print();

    list.insertI(2, 15);
    list.print();

    cout << "Access index 3: ";
    list.accessList(3);

    list.deleteFirst();
    list.print();

    list.deleteLast();
    list.print();

    list.deleteI(2);
    list.print();

    cout << "print reverse: ";
    list.reversePrint(list.head);
    cout << endl;

    return 0;
}
