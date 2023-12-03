//Write a program to print the ASCII value of any given character.
//Write a program to display all factors of a number. 
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
using namespace std;
int ascii();
int factor();
int main(){
    ascii();
    factor();
}
int factor(){
    int a,b;
    cout<<"Tell a number :";
    cin>>a;
    b=pow(a,0.5);
    cout<<"The factors are : \n";
    for(int i=1;i<=b;i++){
        if(a%i==0){
            cout<<i<<"x"<<a/i<<" = "<<a<<endl;
        }
    }
    return 0;
}
int ascii(){
    char a;
    cout<<"Tell a charecter : ";
    cin>>a;
    int b;
    b=a;
    cout<<"The ASCII value of :"<<b<<"\n";
    return 0;
}
