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
    int i=0,currlen=0,maxlen=0;
    int st=0,maxst=0;
    while(1){
        if(str[i]==' ' || str[i]=='\0'){
            if(currlen>maxlen){
                maxlen=currlen;
                maxst=st;
            }
            currlen=0;
            st=i+1;
        }else{
            currlen+=1;
        }
        if(str[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<"The max length is : "<<maxlen<<"\nThe word is : ";
    for(int k=maxst;str[k]!='\0';k++){
        cout<<str[k];
    }
    return 0;
}