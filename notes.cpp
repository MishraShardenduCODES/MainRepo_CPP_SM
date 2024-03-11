#include<bits/stdc++.h>
using namespace std ;

int main(){
    int a;
    cout<<"Tell the total amount : ";
    cin>>a;
    cout<<"\nThe number of Rs100 notes are : "<<a/100;
    a=a%100;
    cout<<"\nThe number of Rs50 notes are : "<<a/50;
    a=a%50;
    cout<<"\nThe number of Rs20 notes are : "<<a/20;
    a=a%20;
    cout<<"\nThe number of Rs1 notes are : "<<a/1;
    return 0;
}