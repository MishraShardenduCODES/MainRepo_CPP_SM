//sum of n natural numberes c++
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
using namespace std;
int dgctr(int a);
int btod(int a);
int dtob(int a);
int main(){
    int a;
    cout<<"Tell a binary number : ";
    cin>>a;
    int b;
    cout<<"Tell a decimal number : ";
    cin>>b;
    cout<<"The decimal number = "<<btod(a)<<endl;
    dtob(b);
    return 0;
}
int dgctr(int a){
    int len=0,y;
    for(int i=1;;i=i*10){
        y=a/i;
        if(y==0){
            break ;
        }
        len+=1;
    }
    return len;
}
int btod(int a){
    int b,c,d=0,e,z,dum,len=dgctr(a);
    dum=len-1;
    z=pow(10,len-1);
    for(int i=0;i<len;i++){
        b=a%z; 
        c=(a-b)/z;
        e=pow(2,dum);
        dum--;
        d+=e*c;
        z=z/10;
        a=b;
    }
    return d;
}
int dtob(int a){
    int b,dec=0,d=1;
    for(int i=0;a!=0;i++){
        b=a%2; //1
        dec+=b*d;  
        d=d*10;
        a=a/2;
    }
    cout<<"The number in binary = "<<dec;
}
