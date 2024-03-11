#include<bits/stdc++.h>
using namespace std ;

int ap(int a){
    return (3*a + 7);
}
int main(){
    int a;
    cout<<"Tell a number : ";
    cin>>a;
    int ans = ap(a);
    cout<<"The valeu is : "<<ans;
}