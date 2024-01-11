#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    string str;
    cout<<"Tell a string : ";
    getline(cin,str);
    int arr[26]={0};
    for(int i=0;str[i]!='\0';i++){
        str[i]=toupper(str[i]);
        arr[str[i]-'A']+=1;
    }
    int maxfreq=INT_MIN;
    for(int i=0;i<26;i++){
        cout<<"The charecter "<<static_cast<char>('A' + i)<<" comes "<<arr[i]<<" times."<<endl;
        maxfreq = max(maxfreq,arr[i]);
    }
    for(int i=0;i<26;i++){
        if(arr[i]==maxfreq){
            cout<<"The most frequent occuring charecter is "<<static_cast<char>('A'+i)<<" and it comes "<<arr[i]<<" times"<<endl;
        }
    }
    return 0;
}