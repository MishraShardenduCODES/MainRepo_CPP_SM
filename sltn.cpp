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
    cout<<"Tell the number of element : ";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cout<<"Tell the value : ";
        cin>>arr[i];
    }
    for(int i=0;i<a-1;i++){
        int min=i;
        for(int j=i+1;j<a;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min != i){
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
    for(int i=0;i<a;i++){
        cout<<arr[i];
    }
    return 0;
}