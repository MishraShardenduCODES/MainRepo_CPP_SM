#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
#include<vector>
#include<math.h>
using namespace std;
int N = 1e6;
int main(){
    int a;
    cout<<"Tell a number : ";
    cin>>a;
    int arr[a];
    bool arr2[N];
    for(int i=0;i<N;i++){
        arr2[i]= false;
    }
    for(int i=0;i<a;i++){
        cout<<"Tell the element : ";
        cin>>arr[i];
        if(arr[i]>=0){
            arr2[arr[i]]= true;
        }
    }
    int stpr=0;
    for(int i=0;i<a;i++){
        if(arr2[i]==false){
            cout<<"The smallest number missing is : "<<i;
            stpr=1;
            break;
        }
    }
    if(stpr==1){
        cout<<"There are no number missing in the array as per its length!!";
    }
}