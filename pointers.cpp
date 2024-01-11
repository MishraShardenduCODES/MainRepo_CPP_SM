#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<limits.h>
#include<cstdlib>
#include<cctype>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int a=5;
    cout<<a<<endl;
    cout<<&a<<endl;
    int*ptr2;
    ptr2 = &a;
    cout<<ptr2<<endl;
    *ptr2 = 10;
    cout<<a<<endl;
    cout<<*ptr2<<endl;


    int arr[5]={1,2,3,4,5};
    cout<<*arr<<endl;

    int*ptr3=arr;
    for(int i=0;i<5;i++){
        cout<<*ptr3<<" ";
        ptr3++;
    }
    cout<<endl;

    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<" ";
    }

     
    cout<<endl;
}