//even number in range c++
#include <iostream>
using namespace std;
int main(){
    int a,b,n1,n2;
    cout<<"Tell from where you want to know :";
    cin>>a;
    cout<<"Tell till where you want to know :";
    cin>>b;
    n1=a<b?a:b;
    n2=a>b?a:b;
    for(int i=n1;i<=n2;i++){
        if(i%2!=0){
            continue;
        }else{
            cout<<"This is an even number : "<<i<<endl ;
        }
    }
    return 0;
}
