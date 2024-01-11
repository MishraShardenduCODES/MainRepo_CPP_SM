#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
#include<vector> 
#include<math.h>
using namespace std;

int kdne(int arr[],int len){
    int currsum=0,mx=INT_MIN;
    for(int i=0;i<len;i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        mx=max(mx,currsum);
    }
    return mx;
}
int main(){
    int a;
    cout<<"Tell length : ";
    cin>>a;
    int sum=0,arr2[a],arr[a];
    for(int i=0;i<a;i++){
        cout<<"Tell the elemnt of an array : ";
        cin>>arr[i];
        arr2[i]=-arr[i];
        sum+=arr[i];
    }
    int nonwrapsum=kdne(arr,a);
    int wrapsum= sum + kdne(arr2,a);
    cout<<"The max sum is given by : "<<max(nonwrapsum,wrapsum);
}