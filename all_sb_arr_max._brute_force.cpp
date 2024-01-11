#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
#include<vector> 
#include<math.h>
using namespace std;


int main(){
    int a;
    cout<<"Tell : ";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cout<<"Tell the elemnt of an array : ";
        cin>>arr[i];
    }
    int sum=0,mx=INT_MIN;
    for(int i=0;i<a;i++){
        for(int j=a-1;j>=0;j--){
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            mx=max(mx,sum);
            sum=0;
        }
    }
    cout<<"The nax value is : "<<mx; 
    return 0;
}