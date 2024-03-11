#include<bits/stdc++.h>
using namespace std;

int isPrime(int num){
    int stpr=1;
    int len=sqrt(num);
    for(int i=2;i<=len;i++){
        if(num%i == 0){
            stpr=0;
            break;
        }
    }
    if(stpr){
        cout<<"The number "<<num<<" is a prime number. \n";
    }else{
        cout<<"The number "<<num<<" is not a prime number. \n";
    }
}

int main(){
    cout<<"Tell from where till where you wnat to know : ";
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        isPrime(i);
    }
}