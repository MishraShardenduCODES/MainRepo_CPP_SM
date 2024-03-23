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

int mntn_arr(int*arr,int l,int r){
    if (l == r) return arr[l] ; 
    int mid = l + (r-l)/2 ;
    if(arr[mid]<arr[mid+1]) return mntn_arr(arr,mid+1,r);
    else return mntn_arr(arr,l,mid);
}

int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9,8,7,6,5,4,3,2,1,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    int l=0,r=len-1;
    cout<<"The element at top is : "<<mntn_arr(arr,l,r);
}