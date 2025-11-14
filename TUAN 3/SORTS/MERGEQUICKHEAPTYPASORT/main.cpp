#include <iostream>
#include <vector>
#include "merge_sort.h"
#include "quick_sort.h"
#include "heap_sort.h"
using namespace std;

void printArray(const vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    cout << "\nMang ban dau: ";
    printArray(arr);

    // Merge Sort
    vector<int> arr1 = arr;
    mergeSort(arr1, 0, arr1.size() - 1);
    cout << "Sau Merge Sort: ";
    printArray(arr1);

    // Quick Sort
    vector<int> arr2 = arr;
    quickSort(arr2, 0, arr2.size() - 1);
    cout << "Sau Quick Sort: ";
    printArray(arr2);

    // Heap Sort
    vector<int> arr3 = arr;
    heapSort(arr3);
    cout << "Sau Heap Sort: ";
    printArray(arr3);

    return 0;
}
