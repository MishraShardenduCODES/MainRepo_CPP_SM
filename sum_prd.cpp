#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,sum=0,prd=1;
    cout<<"Tell a number : ";
    cin>>a;
    while(a!=0){
        int temp=a%10;
        sum+=temp;
        prd*=temp;
        a=a/10;
    }
    cout<<"The difference is : "<<prd-sum<<"\n";
    return 0;
}