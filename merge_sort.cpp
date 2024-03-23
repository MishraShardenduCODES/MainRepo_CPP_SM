#include<bits/stdc++.h>
using namespace std;

#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define fr(i, len) for(int i = 0; i < len; i++)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
#define N 1000
typedef long long int ll;
typedef const int c_int;
typedef vector<int> vnt; 
typedef double dbl;
int InversionCount = 0;
c_int MOD = 1e9 + 7;
c_int Mx_row = 100;
c_int Mx_col = 100;

void merge(int arr[], int l, int r) {
    int mid = l + (r - l) / 2;
    int len1 = mid - l + 1;
    int len2 = r - mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    fr(i, len1) arr1[i] = arr[l + i];
    fr(i, len2) arr2[i] = arr[mid + 1 + i];
    int i = 0, j = 0, k = l;
    while (i < len1 && j < len2) {
        if (arr1[i] <= arr2[j]) {
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }
    while (i < len1) {
        arr[k++] = arr1[i++];
    }
    while (j < len2) {
        arr[k++] = arr2[j++];
    }
    delete[] arr1;
    delete[] arr2;
}
void mergeSort(int arr[], int l, int r) {
    if (l >= r) return;
    InversionCount += 1;
    int mid = l + (r - l) / 2;
    // for left 
    mergeSort(arr, l, mid);
    // for Right 
    mergeSort(arr, mid + 1, r);
    // merge
    merge(arr, l, r);
}
int main() {
    int arr[] = {51,35,22,77,98,19,20,14,12,34,56,99,76,34,23};
    int len = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, len - 1);
    cout<<"The sorted array is : ";
    fr(i, len) cout << arr[i] << " ";
    nl;
    cout<<"The inversion count is : "<<InversionCount;
    return 0;
}
