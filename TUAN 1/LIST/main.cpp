#include <iostream>
#include "List.h"
using namespace std;

int main() {
    List llist;

    llist.addLast(10);
    llist.addLast(20);
    llist.addLast(30);
    llist.print();

    llist.addFirst(5);
    llist.print();

    llist.insertI(2, 15);
    llist.print();

    cout << "Access index 3: ";
    llist.accessList(3);

    llist.deleteFirst();
    llist.print();

    llist.deleteLast();
    llist.print();

    llist.deleteI(1);
    llist.print();

    cout << "Print reverse: ";
    llist.printReverse();

    return 0;
}
