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
    string str;
    cout<<"Tell teh number : ";
    getline(cin,str);
    sort(str.begin(),str.end(),greater<int>());

    cout<<"The biggest number is : "<<stoi(str)<<endl;
    return 0;
}