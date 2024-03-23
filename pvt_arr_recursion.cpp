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
 
int pvt_arr(int*arr,int l,int r){
    if ( l >= r) return l;
    int m = l + (r - l)/2 ;
    if (arr[m] >= arr[0]) pvt_arr(arr,m+1,r); 
    else pvt_arr(arr,l,m);
}
 
int main(){
    int arr[] = {11,12,1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int l=0,r=len-1;
    int m = pvt_arr(arr,l,r);
    cout<<"The pivot is at index : "<<m<<" element is : "<<arr[m];
}