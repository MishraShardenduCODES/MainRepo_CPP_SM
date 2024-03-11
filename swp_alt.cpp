#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define N 1000
int mx = INT_MIN,mn = INT_MAX;
int len;

void prnt_arr(int arr[]){
    cout<<"The elements of the array are : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}

void mke_arr(int arr[]){
    cout<<"Tell all the element : ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
}

void swp_alt(int arr[]){
    for(int i=0;i<len && i+1<len;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}

int main(){
    cout<<"Tell the length : ";
    cin>>len;
    int arr[len];
    mke_arr(arr);
    nl;
    prnt_arr(arr);
    nl;
    swp_alt(arr);
    nl;
    prnt_arr(arr);
}