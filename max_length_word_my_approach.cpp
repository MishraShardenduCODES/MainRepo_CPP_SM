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
    char str[1000];
    cout<<"Tell a string : ";
    cin.getline(str,1000);
    // cin.ignore();
    int wrlen=0,mx=INT_MIN;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='\0' || str[i]==' ' || str[i]=='\n'){
            wrlen = 0;
            continue;
        }
        wrlen ++;
        mx =max(mx,wrlen);
    }
    cout<<"The max lengtth is : "<<mx;
    return 0;
}