#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0;i<=5;i++){
        cout<<i<<" ";
        i+=1;
    }
    // 0  2  4
    
    // for(int i=0;i<=5;i--){
    //     cout<<i<<" ";
    //     i+=1;
    // }
    // infinte loop
    cout<<"\n";
    for(int i=0;i<5;i++){
        for(int j=i;j<=5;j++){
            cout<<i<<" "<<j<<"\n";
        }
    }

    for(int i=0;i<5;i++){
        for(int j=i;j<=5;j++){
            if(i+j == 10)
                break;
            cout<<i<<" "<<j<<"\n";
        }
    }
}