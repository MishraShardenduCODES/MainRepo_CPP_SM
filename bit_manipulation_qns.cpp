#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
#include<vector>
#include<math.h>

int ispowerof2(int n){
    if(n==0){
        return 0;
    }
    return !(n & n-1);
}

using namespace std;
int main(){
    int a,dum;
    cout<<"Tell teh number you wanna check : ";
    cin>>a;
    if(ispowerof2(a)){
        cout<<"It's a power of 2";
    }else{
        cout<<"It's not a power of 2";
    }
    int cnt;
    dum=a;
    for(cnt=0;a!=0;cnt++){
        a = (a & (a-1));
    }
    cout<<endl<<"The number "<<dum<<" has "<<cnt<<" ones.";
    return 0;
}
