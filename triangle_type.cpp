//Triangle type c++
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Tell length of first side : ";
    cin>>a;
    cout<<"Tell length of second side : ";
    cin>>b;
    cout<<"Tell length of third side : ";
    cin>>c;
    if(a==b){
        if(a==c){
            cout<<"It's a equalatril Triangle. \n";
        }else{
            cout<<"It's an issoceles Triangle. \n";
        }
    }else{
        if(a==c || b==c){
            cout<<"It's an issoceles Triangle. \n";
        }else{
            cout<<"It's a scalene Triangle. \n";
        }
    }
    return 0;
}
