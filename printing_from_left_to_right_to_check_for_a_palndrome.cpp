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
    cout<<"Tell the number you want to check for armstrong : ";
    cin>>a;
    dum=a;
    for(int i=1;;i=i*10){
        int x = a/i;
        if(x==0){
            break ;
        }
        len++;
    }
    int z=pow(10,len-1); //100
    int b,c,d=0,e;
    for(int i=0;i<len;i++){
        b=dum%z;//23
        c=(dum-b)/z; //1
        e=pow(c,len); //1^3
        d+=e; //1+
        z=z/10; //10
        dum=b; //23
    }
    if(d==a){
        cout<<a<<" is an armstrong number as the sum of digit to its length's power = "<<d;
    }else{
        cout<<a<<" is not an armstrong number as the sum of digit to its length's power = "<<d;
    }
    return 0;
}
