//printing digits from left to right and checking palindrome in c++
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
using namespace std;
int main(){
    int a,dum,len=0;
    cout<<"Tell the number you want to reverse : ";
    cin>>a;
    dum=a;
    for(int i=1;;i=i*10){
        int x = a/i;
        if(x==0){
            break ;
        }
        len++;
    }
    int b,c,d=0,e=1,z=pow(10,len-1);
    for(int i=1;i<=len;i++){
        b=a%z;
        c=(a-b)/z;
        d+=c*e; 
        e=e*10; 
        z=z/10; 
        a=b; 
    }
    cout<<"The reversed number is = "<<d<<endl;
    if(d==dum){
        cout<<"It's a plaindrome \n";
    }else{
        cout<<"It's not a palindrome \n";
    }
    return 0;
}
