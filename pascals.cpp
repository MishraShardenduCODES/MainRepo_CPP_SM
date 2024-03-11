#include<bits/stdc++.h>
using namespace std;
#define nl cout<<"\n";

int fact(int a){
    if(a == 0 || a == 1){
        return 1;
    }else{
        return a*fact(a-1);
    }
}

int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int len;
    cout<<"Tell the length : ";
    cin>>len;
    for(int i=0;i<len;i++){
        for(int j=0;j<=len-1-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<ncr(i,j)<<" ";
        }
        nl;
    }
}