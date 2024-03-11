#include<bits/stdc++.h>
using namespace std ;

int main(){
    int a,bit,count=0;
    cout<<"Tell a number : ";
    cin>>a;
    while(a!=0){
        bit=a&1;
        if(bit == 1){
            count+=1;
        }
        a=a>>1;
    }
    if(count == 1){
        cout<<"It's a power of 2";
    }else{
        cout<<"It's not a power of 2";
    }
}

// int main(){
//     int n;
//     cout<<"Tell a number : ";
//     cin>>n;

//     int ans = 1;
//     int stpr=0;
//     for(int i=0;i<=30;i++){
//         if(ans == n){
//             cout<<"It's a power of 2!";
//             stpr=1;
//             break;
//         }
//         if(ans >= INT_MAX/2){
//             break;
//         }
//         ans *= 2;
//     }
//     if(stpr == 0){
//         cout << n << " is not a power of 2." <<"\n";
//     }
// }