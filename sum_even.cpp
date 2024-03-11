#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Tell till where you have to print : ";
    int i = 0;
    int sum = 0;
    int n;
    cin>>n;
    while(i<=n){
        sum += i;
        cout<< i << " \n";
        i += 2;
    }
    cout<<sum<<" \n";
    return 0;
}

