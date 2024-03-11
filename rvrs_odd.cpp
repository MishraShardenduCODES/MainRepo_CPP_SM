#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define N 1000
int mx = INT_MIN,mn = INT_MAX;
int sum = 0,len;

void prnt_arr(int arr[]){
    cout<<"The elements of the array are : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    nl;
}

void mke_arr(int arr[]){
    cout<<"Tell all the element : ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    nl;
}

void rvrs_even_arr(int arr[]){
    for (int i=0;i<len/2;i++){
        if(i%2 != 0){
            int temp = arr[i];
            arr[i]=arr[len-1-i];
            arr[len-1-i]=temp;
        }
    }
}

int main(){
    cout<<"Tell the length : ";
    cin>>len;
    int arr[len];
    mke_arr(arr);
    nl;
    cout<<"The original array is : "<<"\n";
    prnt_arr(arr);
    nl;
    rvrs_even_arr(arr);
    nl;
    cout<<"The reversed array is : "<<"\n";
    prnt_arr(arr);
    return 0;
}