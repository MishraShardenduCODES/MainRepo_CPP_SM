#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<limits.h>
#include<cstdlib>
#include<cctype>
#include<vector>
#include<cmath>
using namespace std;

//call by reference
int swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=4,b=5;
    cout<<a<<b<<endl;
    swap(&a,&b);
    cout<<a<<b<<endl;
}