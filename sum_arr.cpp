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

int sum_arr(int* arr, int len) {
    if (len == 0) return 0;
    return  arr[0] + sum_arr(arr+1,len-1);
}
int main() {
    int arr[] = {5,4,5,10,1,2,3,4,66};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout<<"The sum is : "<<sum_arr(arr,len);
    return 0;
}
