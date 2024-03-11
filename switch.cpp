#include<bits/stdc++.h>
using namespace std ;

int main(){
    while(1){
        int a;
        cout<<"\nTell a vlaue : ";
        cin>>a;
        switch(a){
            case 1 : cout<<"Stage - 1";continue;
            case 2 : cout<<"Stage - 2";continue;
            case 3 : cout<<"Stage - 3";continue;
            case 4 : exit(1);
            default: cout<<"Stage - 5";continue;
        }
    }
    return 0;
}