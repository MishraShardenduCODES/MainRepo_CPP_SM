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
    cout<<"Tell teh length of array you want : ";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cout<<"Tell an element : ";
        cin>>arr[i];
    }
    int key;
    cout<<"Tell the element : ";
    cin>>key;
    for(int i=0;i<a;i++){
        for(int j=i;j<a;j++){
            int sum = arr[i] + arr[j];
            if(sum == key){
                cout<<"YES THE SUM OF THE "<<i<<" and "<<j<<" = "<<key; 
            }
        }
    }
    return 0;
}