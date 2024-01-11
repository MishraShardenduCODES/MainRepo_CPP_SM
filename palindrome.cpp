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

    int a=strlen(str);
    for(int i=0;i<a/2;i++){
        char temp = str[i];
        str[i]=str[a-i-1];
        str[a-i-1]=temp;
    }
    cout<<str;
    return 0;
}