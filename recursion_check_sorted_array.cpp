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

bool srt_arr(int* arr, int len) {
    if (len == 0 || len == 1) {
        return true;
    }
    if (arr[0] > arr[1]) {
        return false;
    } else {
        return srt_arr(arr + 1, len - 1);
    }
}
int main() {
    int arr[] = {5,3,6,8,1,0,9,2,88,0,9,88,66};
    int len = sizeof(arr) / sizeof(arr[0]);
    if (srt_arr(arr, len)) {
        fr(i, len) cout << arr[i] << " ";
    } else {
        cout << "Array is not sorted!";
    }
    return 0;
}
