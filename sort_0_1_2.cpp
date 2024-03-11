#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[],int len) {
    int low = 0;         // Pointer for elements less than 1
    int high = len - 1;  // Pointer for elements greater than 1
    int mid = 0;         // Pointer for elements equal to 1

    while(mid <= high) {
        if(arr[mid] == 0) {
            // Swap arr[low] and arr[mid],increment both pointers
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            // No swapping needed,move to the next element
            mid++;
        } else {  // arr[mid] == 2
            // Swap arr[mid] and arr[high],decrement high pointer
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

void printArray(int arr[],int len) {
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {0,1,2,1,0,2,1,1,0,1,2,2,2,1,1,2,1,2,1,2};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr,len);

    sort012(arr,len);

    cout << "Sorted array: ";
    printArray(arr,len);

    return 0;
}
 