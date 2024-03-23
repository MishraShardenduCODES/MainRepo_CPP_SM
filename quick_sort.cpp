#include<iostream>
using namespace std;

int partition(int arr[], int l, int r) {
    int pivot = arr[l];
    int cnt = 0;
    for(int i = l+1; i <= r; i++) {
        if(arr[i] <= pivot) {
            cnt++;
        }
    }
    // place pivot at right position
    int pivotIndex = l + cnt;
    swap(arr[pivotIndex], arr[l]);
    // left and right part rearrangement
    int i = l, j = r;
    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int l, int r) {
    // base case
    if(l >= r) 
        return;
    // partitioning
    int p = partition(arr, l, r);
    // sort left part
    quickSort(arr, l, p-1);
    // sort right part
    quickSort(arr, p+1, r);
}

int main() {
    int arr[10] = {277,45,14,61,92,929,69,89,19,349};
    int n = 10;

    quickSort(arr, 0, n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
