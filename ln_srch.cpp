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
int main(){
    int key;
    cout<<"Tell the numebr of element you wanna enter : ";
    cin>>n;
    int arr[n],i=0;
    while(i<n){
        cout<<"Tell the element : ";
        cin>>arr[i];
        i++;
    }
    cout<<"Tell the number you wanna find : ";
    cin>>key;
    int stpr=0;
    for(int j=0;j<n;j++){
        if(key==arr[j]){
            cout<<"The element "<<key<<" is found at "<<j<<" index.";
            stpr=1;
            break;
        }
    }
    if(stpr==0){
            cout<<"The element "<<key<<" is not found in an array.";
    }
    return 0;
}