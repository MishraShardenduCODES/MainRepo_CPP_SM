#include <iostream>
#include <algorithm>
using namespace std;

void prnt_arr(int arr[], int len) {
    cout << "The elements of the array are : ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void mke_arr(int arr[], int len) {
    cout << "Tell all the elements: ";
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
}

int frst_occ(int arr[], int len, int key) {
    int l = 0, r = len - 1, mid;
    int ans = -1;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (arr[mid] == key) {
            ans = mid;
            r = mid - 1;
        } else if (key > arr[mid]) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int last_occ(int arr[], int len, int key) {
    int l = 0, r = len - 1, mid;
    int ans = -1;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (arr[mid] == key) {
            ans = mid;
            l = mid + 1;
        } else if (key > arr[mid]) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int main() {
    int len, key;
    cout << "Tell the length and key: ";
    cin >> len >> key;
    int arr[len];
    mke_arr(arr, len);
    sort(arr, arr + len);
    prnt_arr(arr, len);
    int first = frst_occ(arr, len, key);
    int last = last_occ(arr, len, key);
    if (first != -1 && last != -1) {
        cout << "The occurrence is at " << first << " and the last is at " << last;
        cout << "The number of occurance are : "<<last-first+1;
    } else {
        cout << "Element not found";
    }
    return 0;
}
