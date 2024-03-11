#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cout<<"Tell a string : ";
    string str;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]<='z' && str[i]>='a'){
            cout<<str[i]<<" is LowerCase \n";
        }else if(str[i]<='Z' && str[i]>='A'){
            cout<<str[i]<<" is UpperCase \n";
        }else{
            cout<<str[i]<<" is number or special charecter\n";
        }
    }    
    return 0;
}