#include <iostream>
#include <algorithm>
using namespace std;

#define nl cout<<"\n";

void prnt_arr(int arr[], int len) {
    cout << "The elements of the array are: ";
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
}

void mke_arr(int arr[], int len) {
    cout << "Tell all the elements: ";
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
    }
}

int main() {
    int key, len;
    cout << "Tell the length: ";
    cin >> len;
    cout << "Tell the key: ";
    cin >> key;
    int arr[len];
    mke_arr(arr, len);
    prnt_arr(arr, len);
    nl;

    // Sort the array
    sort(arr, arr + len);

    bool found = false;
    for(int i = 0; i < len - 2; i++) {
        int left = i + 1;
        int right = len - 1;
        while(left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if(sum == key) {
                cout << "The sum of elements at the index " << i << " (" << arr[i] << "), " << left << " (" << arr[left] << ") " << " and " << right << " (" << arr[right] << ") " << " gives the sum = " << key;
                nl;
                found = true;
                break;
            } else if(sum < key) {
                left++;
            } else {
                right--;
            }
        }
    }
    if(!found) {
        cout << "There are no such elements!";
    }
    return 0;
}
