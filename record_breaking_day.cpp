//record breaking day in c++
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
    int arr[n];
    cout<<"Tell how many days you want to store : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Tell how many visitors came at day "<<i+1<<" : ";
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if((i==0 && arr[i]<arr[i+1])||(i==n-1 && arr[i]==max)||(arr[i]==max && arr[i]>arr[i+1])){
            cout<<"The day "<<i+1<<" is a record breaking day."<<endl;
        }
    }   
    return 0;
}
