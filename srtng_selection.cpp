#include <iostream>
using namespace std;

void selectionSort(int arr[], int n, int startIdx) {
    if (startIdx >= n - 1) return;
    int minIdx = startIdx;
    for (int i = startIdx + 1; i < n; ++i) {
        if (arr[i] < arr[minIdx]) minIdx = i;
    }
    if (minIdx != startIdx) {
        swap(arr[minIdx], arr[startIdx]);
    }
    selectionSort(arr, n, startIdx + 1);
}

int main() {
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionSort(arr, n, 0); 
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
