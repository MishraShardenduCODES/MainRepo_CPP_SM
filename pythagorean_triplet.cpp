//pythagorean triplet c++
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
using namespace std;
int pyth(int a,int b,int c);
int main(){
    int a,b,c;
    cout<<"Tell first number : ";
    cin>>a;
    cout<<"Tell second number : ";
    cin>>b;
    cout<<"Tell third number : ";
    cin>>c;
    pyth(a,b,c);
    return 0;
}
int pyth(int a,int b,int c){
    int m,n,o;
    m=pow(a,2);
    n=pow(b,2);
    o=pow(c,2);
    if(m+n==o  m+o==n  n+o==m ){
        cout<<"Yes it's a Pythagorean Triplet ";
    }else{
        cout<<"No it's not a Pythagorean Triplet ";
    }
    return 0;
}
