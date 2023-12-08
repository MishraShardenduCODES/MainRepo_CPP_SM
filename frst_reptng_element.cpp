//first repeating element c++
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
    cout<<"Tell how many element you want to store : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Tell value at postion "<<i+1<<" : ";
        cin>>arr[i];
    }
    int m=1e6+2;
    int ind[m];
    for(int i=0;i<m;i++){
        ind[i]= -1;
    }
    int min_idx=INT_MAX;
    for(int i=0;i<n;i++){
        if(ind[arr[i]] != -1){
            min_idx=min(min_idx,ind[arr[i]]);
        }else{
            ind[arr[i]]=i;
        }        
    }
    if(min_idx == INT_MAX){
        cout<<"There are no repeating element."<<endl;
        return 0;
    }else{
        cout<<"The element repeating and at min index is "<<arr[min_idx]<<" at "<<min_idx<<" index"<<endl;
    }
    return 0;
}