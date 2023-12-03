//fibonaaci in c++
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
using namespace std;
int main(){
    int a=0,n,c,temp,b=1;
    cout<<"Till where you want fibonaaci : ";
    cin>>n;
    cout<<"The sequence is given by : \n";
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n-2;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}
