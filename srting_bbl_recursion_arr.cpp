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

void bubble_sort_arr(int arr[],int len){
    if (len == 1 || len == 0) return ;
    for(int i=0;i<len - 1;i+=1){
        if (arr[i] > arr[i+1]) swap(arr[i],arr[i+1]);
    }
    bubble_sort_arr(arr,len-1);
}
int main(){
    int arr[] = {51,42,23,47,18,29,19,20,80};
    int len = sizeof(arr)/sizeof(arr[0]);
    bubble_sort_arr(arr,len);
    fr(i,len) cout<<arr[i]<<" ";
}