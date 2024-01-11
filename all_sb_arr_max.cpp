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
    int mx=INT_MIN,currsum[a+1];
    currsum[0]=0;
    for(int i=1;i<a+1;i++){
        currsum[i]=currsum[i-1] + arr[i-1];
    }
    for(int i=1;i<a+1;i++){
        for(int j=0;j<i;j++){
            int sum = currsum[i] - currsum[j];
            mx = max(mx,sum);
        }
    }
    cout<<"The max of the sum of all subarray is : "<<mx ;
    return 0;
}