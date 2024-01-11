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
    int n;
    cout<<"Tell the element : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Tell the elemnet : ";
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>arr[j+1]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }    
    return 0;
}