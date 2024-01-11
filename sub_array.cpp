#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
#include<vector>
#include<cmath>
using namespace std;

int prntsbary(int arr[],int len){
    for(int i=0;i<(1<<len);i++){
        for(int j=0;j<len;j++){
            if( i & (1<<j) ){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int len;
    cout<<"Tell length : ";
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++){
        cout<<"Tell an element : ";
        cin>>arr[i];
    }
    prntsbary(arr,len);
}