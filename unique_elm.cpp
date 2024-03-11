#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define N 1000
int mx = INT_MIN,mn = INT_MAX;
int len,uncmn = 0;

void prnt_arr(int arr[]){
    cout<<"The elements of the array are : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
        uncmn=uncmn^arr[i];
    }
}

void mke_arr(int arr[]){
    cout<<"Tell all the element : ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
}

int main(){
    cout<<"Tell the length of the array : ";
    cin>>len;
    int arr[len];
    mke_arr(arr);
    nl;
    prnt_arr(arr);
    nl;
    cout<<"The un-common element in this array is : "<<uncmn;
    nl;
}