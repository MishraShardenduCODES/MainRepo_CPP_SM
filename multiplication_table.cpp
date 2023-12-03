//multiplication table a terms c++
#include <iostream>
using namespace std;
int main(){
    int a,i=1,sum=0;
    cout<<"Whose multiplication table do you want :";
    cin>>a;
    while(i<=10){
        cout<<i<<"x"<<a<<"="<<i*a<<endl;
        i+=1;  
    }
    return 0;
}
