//sum of all array c++
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
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum+=arr[j];
        }
        cout<<"The SUM of the term after each sub array = "<<sum<<endl;
    }
    return 0;
}
