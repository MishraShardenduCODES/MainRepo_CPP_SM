//decimal to any base c++
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
using namespace std;
int dtoab(int a,int b);
int btod(int a);
int main(){
    int a,b; 
    cout<<"Tell the decimal number : ";
    cin>>a;
    cout<<"Tell the base : " ;
    cin>>b;
    dtoab(a,b);
    return 0;
}
int dtoab(int a,int b){
    int num[100],c=0;
    for(int i=0; a>0; i++){
        num[i]=a%b;
        a=a/b;
        c++ ;
    }
    cout<<"The ans = ";
    for(int i=c-1;i>=0;i--){
        cout<<num[i];
    }
}
