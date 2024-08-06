#include <iostream>
using namespace std;

void quicksort(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    int i = start - 1;
    int j = start;
    int pivot = end;
    while (j < pivot) {
        if (arr[j] < arr[pivot]) {
            ++i;
            swap(arr[i], arr[j]);
        }
        ++j;
    }
    ++i;
    swap(arr[i], arr[pivot]);
    quicksort(arr, start, i - 1);
    quicksort(arr, i + 1, end);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {67, 89, 34, 54, 12, 83, 45};
    int start = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    int end = size - 1;
    quicksort(arr, start, end);
    printArray(arr, size);
    return 0;
}
