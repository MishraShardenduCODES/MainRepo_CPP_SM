//calculate factorial in c++
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
using namespace std;
int main(){
    int a,b=1;
    cout<<"Tell the number whose factorial you want to know : ";
    cin>>a;
    for(int i=1;i<=a;i++){
        b=b*i;
    }
    cout<<"The factorial is = : "<<b;
    return 0;
}
