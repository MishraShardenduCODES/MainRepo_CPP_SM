#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define N 1000
#define len_arr int len; cout<<"Tell the length : "; cin>>len; int arr[len];


void prnt_arr(int arr[],int len){
    cout<<"The elements of the array are : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
void mke_arr(int arr[],int len){
    cout<<"Tell all the elements : ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
}

int getPvt(int arr[],int len){
    int l=0,r=len-1,mid;
    while(l<r){
        mid = l+(r-l)/2;
        if(arr[mid] >= arr[0]){
            l=mid+1;
        }else{
            r=mid;
        }
    }
    return l;
}
int main(){
    int arr[5]={7,8,1,2,3};
    cout<<"The value at the pivot is : "<<arr[getPvt(arr,5)];
    return 0;
}