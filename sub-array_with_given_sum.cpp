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
    int arr[n],sum,crsum;
    for(int i=0;i<n;i++){
        cout<<"Tell value at postion "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Tell the sum you want to find : ";
    cin>>sum;
    int i = 0,j = 0,st = -1,en = -1;

    while(j < n && crsum + arr[j] <= sum){
        
    }
    return 0;
}