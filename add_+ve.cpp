//add only +ve number c++
#include <iostream>
using namespace std;
int main(){
    int a,sum=0;
    do{
        cout<<"Tell a number :";
        cin>>a;
        if(a<0){
            cout<<"This is a negative number. Program has ended. \n";
            cout<<"The sum till now ="<<sum;
        }
        sum+=a;
    }while(a>=0);
    return 0;
}
