#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl cout<<"\n";
#define dbl double
#define N 1000

int prnt_arr(int arr[],int len){
    cout<<"The elements of the array are : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
int mke_arr(int arr[],int len){
    cout<<"Tell all the elements : ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
}
int rvrs_arr(int arr[],int len){
    for(int i=0;i<len/2;i++){
        int temp = arr[i];
        arr[i] = arr[len-i-1];
        arr[len-i-1] = temp;
    }
}
int main(){
    int len;
    cout<<"Tell the length : ";
    cin>>len;
    int arr[len];
    mke_arr(arr,len);
    prnt_arr(arr,len);
    nl;
    rvrs_arr(arr,len);
    prnt_arr(arr,len);
}