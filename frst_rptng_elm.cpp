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
        cout<<"Tell: ";
        cin>>arr[i];
    }
    int mn=INT_MAX;
    int N = 1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    for(int i=0;i<a;i++){
        if(idx[arr[i]] != -1){
            mn = min(idx[arr[i]],mn);
        }else{
            idx[arr[i]]=i;
        }
    }
    if(mn==INT_MAX){
        cout<<"No Repeating Elemnent";
    }else{
        cout<<"THE FIRST REPEATING ELEMENT IS AT : "<<mn<<" index";
    }
    return 0;
}