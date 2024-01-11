#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
#include<vector> 
#include<math.h>
using namespace std;
int n=0;
int kdne(int arr[],int len){
    int mx=INT_MIN;
    int currsm=0;
    for(int i=0;i<len;i++){
        currsm += arr[i];
        if(currsm<0){
            currsm=0;
        }
        mx=max(mx,currsm);
    }
    return mx;
}

int main(){
    int sum=0,a;
    cout<<"Tell the length of the array : ";
    cin>>a;
    int arr[a],arr2[a];
    for(int i=0;i<a;i++){
        cout<<"Tell the element : ";
        cin>>arr[i];
        sum += arr[i];
        arr2[i]= -1*arr[i];
    }
    int nonwrpsm = kdne(arr,a);
    int wrsum = sum + kdne(arr2,a);
    cout<<max(nonwrpsm,wrsum);
    return 0;
}