#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=1;
    int b=2;
    if(a-- > 0 && ++b >2){
        cout<<"S-1\n";
    }else{
        cout<<"S-2\n";
    }
    cout<<a<<" "<<b<<"\n";
}