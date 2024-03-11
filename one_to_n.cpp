#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 1;
    cout<<"Tell till where you have to print : ";
    int sum = 0;
    int n;
    cin>>n;
    while(i<=n){
        sum+=i;
        cout<<i++<<" \n";
    }
    cout<<sum<<" \n";
    return 0;
}