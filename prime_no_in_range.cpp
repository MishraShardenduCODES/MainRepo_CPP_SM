//prime number in range c++
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
using namespace std;
int main(){
    int a,b,c,d,max,min;
    cout<<"TEll from where you want : ";
    cin>>a;
    cout<<"Tell till where you want : ";
    cin>>b;
    max=a>b?a:b;
    min=a<b?a:b;
    for(int i=min;i<=max;i++){
        if(i==1){
            cout<<"1 is neither prime nor composite \n";
            continue;
        }
        int stpr=0;
        d=pow(i,0.5);
        for(int j=2;j<=d;j++){
            if(i%j==0){
                break;
            }else{
                stpr++;
            }
        }
        if(stpr==d-2+1){
            cout<<i<<" is a prime number \n";
        }
    }
    return 0;
}
