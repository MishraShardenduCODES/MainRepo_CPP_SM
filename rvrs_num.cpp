#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,sum=0;
    cout<<"Tell : ";
    cin>>a;
    while(a!=0){
        int temp=a%10;
        if((sum>INT_MAX/10) || (sum<INT_MIN/10)) return 0;
        sum= sum*10 + temp;
        a/=10;
    }
    cout<<sum;
    return 0;
}