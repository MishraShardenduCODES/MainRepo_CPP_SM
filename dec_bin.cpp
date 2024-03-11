#include<bits/stdc++.h>
using namespace std ;

int main(){
    int long ans=0,a,i=0;
    cout<<"Tell the number : ";
    cin>>a;
    while(a!=0){
        int long bit = a & 1;
        ans=(bit*pow(10,i)) + ans;
        a=a>>1;
        i+=1; 
    }
    cout<<ans;
    return 0;
}