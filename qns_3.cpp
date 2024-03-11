#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=1;
    int b=2;
    if(a-- > 0 || ++b >2){
        cout<<"S-1\n";
    }else{
        cout<<"S-2\n";
    }
    cout<<a<<" "<<b<<"\n";

    int num=3;
    cout<<(25 * (++num)); 

    int m=1;
    int n=m++;
    int o=++m;;
    cout<<"\n"<<m<<" "<<n<<" "<<o<<"\n";
} 