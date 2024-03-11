#include<bits/stdc++.h>
using namespace std ;

int cnt=0;

int cnt_bts(int a){
    while(a!=0){
        int temp = a&1;
        if(temp == 1){
            cnt+=1;
        }
        a=a>>1;
    }
}

int main(){
    int a,b;
    cout<<"Tell a and b : ";
    cin>>a>>b;
    cnt_bts(a);
    cnt_bts(b);
    cout<<"The number of set bits are : "<<cnt;
}