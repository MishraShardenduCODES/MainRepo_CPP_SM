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
    cout<<"Tell the length of array you want : ";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cout<<"Tell an element : ";
        cin>>arr[i];
    }
    int mx=INT_MIN,currsum=0;
    for(int i=0;i<a;i++){
        currsum +=arr[i];
        if(currsum<0){
            currsum=0;
        }
        mx=max(mx,currsum);
    }
    cout<<"The max sum is given by : "<<mx;
}