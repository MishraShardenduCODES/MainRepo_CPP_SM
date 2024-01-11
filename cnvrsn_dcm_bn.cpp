#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
#include<vector>
#include<math.h>
using namespace std;
int cnv_bin_dec(){
    int a,b,c=0,i=0;
    cout<<"Tell a binray number : ";;
    cin>>a;
    while(a>0){
        b=a%10;
        c+=b*pow(2,i);
        i+=1;
        a=a/10;
    }
    cout<<c<<endl;
}
int cnv_dec_bin(){
    int a;
    cout<<"Tell a decimal number : ";
    cin>>a;
    int c,d,i=1,e=0;
    while(a>0){
        c=a%2;
        d=c*i;
        i=i*10;
        e+=d;
        a=a/2;
    }
    cout<<e<<endl;
}
int main(){
    cnv_bin_dec();
    cnv_dec_bin();
    return 0 ;
}