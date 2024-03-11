//  0  1  10  11  100  101  110
//  0  1  2   3    4    5    6  
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=2; //10
    int b=3; //11
    int m=~a;
    cout<<m<<"\n"; 
    int c=a&b;
    cout<<c<<"\n"; 
    int d=a|b;
    cout<<d<<"\n";
    int e=a^b;
    cout<<e<<"\n";
    int f=b<<1; 
    cout<<f<<"\n";
    int g=b>>1;
    cout<<g<<"\n";
}

