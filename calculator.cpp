//calculator c++
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
using namespace std;
int main(){
    float a,b;
    char op;
    cout<<"Tell two numbers : ";
    cin>>a>>b;
    cout<<"Tell the operation you want to do (+,-,/,*,%) : ";
    cin>>op;
    switch(op){
        case '+':
            cout<<"The sum of the two numbers = "<<a+b;
            break;
        case '-':
            cout<<"The difference between the two numbers = "<<a-b;
            break;
        case '/':
            if(b==0){
                cout<<"You can not divide by zero \n";
                break;
            }else{
                cout<<"The division of two numebers gives "<<a/b;
                break;
            }
        case '*':
            cout<<"The multiplication of the two numbers is given by "<<a*b;
            break;
        case '%':
            if(b==0){
                cout<<"You can not divide by zero \n";
                break;
            }else{
                cout<<"The remainder of two numebers after a/b = "<<(int)a%(int)b;
                break;
            }
        default : 
            cout<<"This function is yet not available on the calculator \n";
            break;    
    }
    return 0;
}
