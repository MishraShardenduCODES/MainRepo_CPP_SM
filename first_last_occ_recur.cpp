#include<bits/stdc++.h>
using namespace std;

#define fr(i, len) for(int i = 0; i < len; i++)
#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
typedef long long int ll;
typedef const int c_int;
typedef vector<int> vnt; 
typedef double dbl;
c_int MOD = 1e9 + 7;
c_int Mx_row = 100;
c_int Mx_col = 100;
#define N 1000

int frst_occ(int* arr, int len, int key, int l, int r) {
    if (l > r) return -1;
    int mid = l + (r - l) / 2;
    if (arr[mid] == key) {
        if (mid == 0 || arr[mid - 1] != key) {
            return mid;
        } else {
            return frst_occ(arr, len, key, l, mid - 1);
        }
    } else if (arr[mid] < key) {
        return frst_occ(arr, len, key, mid + 1, r);
    } else {
        return frst_occ(arr, len, key, l, mid - 1);
    }
}

int last_occ(int* arr, int len, int key, int l, int r) {
    if (l > r) return -1;
    int mid = l + (r - l) / 2;
    if (arr[mid] == key) {
        if (mid == len - 1 || arr[mid + 1] != key) {
            return mid;
        } else {
            return last_occ(arr, len, key, mid + 1, r);
        }
    } else if (arr[mid] < key) {
        return last_occ(arr, len, key, mid + 1, r);
    } else {
        return last_occ(arr, len, key, l, mid - 1);
    }
}

int main() {
    int arr[] = {1,1,3,4,5,4,4,4,2,4,5,1,2,4,4,5,6,7,7,8,9,10,5,5,5,5,5};
    int key = 4;
    int len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + len);
    cout << "The array is : ";
    fr(i, len) cout << arr[i] << " ";
    nl;
    int l = 0, r = len - 1;
    cout << "The first occurrence is at : " << frst_occ(arr, len, key, l, r) << "\n";
    cout << "The last occurrence is at : " << last_occ(arr, len, key, l, r) << "\n";
    return 0;
}
