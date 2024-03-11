#include<bits/stdc++.h>
using namesqignpace std;

int main(){
    int a;
    cout<<"Tell the length/bredth of the pattern : ";
    cin>>a;
    for(int i=0;i<a;i++){
        for(int j=1;j<=a-i;j++){
            cout<<j<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        for(int j=a-i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<"\n";        
    } 
}