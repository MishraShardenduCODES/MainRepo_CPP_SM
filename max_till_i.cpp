//max till i c++
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
using namespace std;
int n=0;
int main(){
    int arr[n];
    cout<<"Tell how many elements : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Tell the element at "<<i+1<<" postion : ";
        cin>>arr[i];
    }
    int mxti=INT_MIN;
    for(int i=0;i<n;i++){
        if(mxti<=arr[i]){
            mxti=arr[i];
        }
        cout<<"The max at "<<i<<" index = "<<mxti<<endl;
    }
}
