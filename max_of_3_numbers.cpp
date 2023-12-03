#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
using namespace std;
int main(){
    int a,b,c,min,max;
    cout<<"Tell first number : ";
    cin>>a;
    cout<<"Tell second number : ";
    cin>>b;
    cout<<"Tell third number : ";
    cin>>c;
    min=a<b?a:b; 
    max=a>b?a:b;
    cout<<endl;
    if(max>c){
        cout<<"The biggest number is :"<<max<<endl;
    }else{
        cout<<"The biggest number is :"<<c<<endl;
    }
    if(min<c){
        cout<<"The smallest number is :"<<min<<endl;
    }else{
        cout<<"The smallest number is :"<<c<<endl;
    }
    
    return 0;
}
