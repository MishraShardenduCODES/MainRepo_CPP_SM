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
        cout<<"Tell the elemnt of an array : ";
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<a;i++){
        for(int j=a-1;j>=0;j--){
            for(int k=i;k<=j;k++){
                cout<<" "<<arr[k];
                sum+=arr[k];
            }
            cout<<"The sum of this sub array is : "<<sum;
            sum=0;
            cout<<endl;
        }
    }
    return 0;
}