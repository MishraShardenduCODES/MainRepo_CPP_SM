//sum of n terms c++
#include <iostream>
using namespace std;
int main(){
    int a,i=1,sum=0;
    cout<<"Till which number do you want the sum :";
    cin>>a;
    while(i<=a){
        sum+=i;
        i++;
    }
    cout<<"The sum of "<<a<<"natural numbers is = "<<sum<<endl;
    return 0;
}
