#include<bits/stdc++.h>
using namespace std ;

int fibo(int a){
    if(a == 0 || a == 1){
        return a;
    }else{
        return fibo(a-1) + fibo(a-2);
    }
}

int main(){
    int a;
    cout<<"Tell the value of fibo you want to print : ";
    cin>>a;
    cout<<"The Fibonnaci sequence is : "<<fibo(a);
    return 0;
}