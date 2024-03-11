#include<bits/stdc++.h>
using namespace std ;

int main(){
    int m,n,mask=0;
    cout<<"Tell a number : ";
    cin >>m; 
    n=m;
    if (n == 0){
        cout<<"1 is the compliment !";
        return 0;
    }
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans = (~n) & mask;
    cout << ans << " is the complement of " << n;

    return 0;
}


// int main(){
//     int N;
//     cout<<"Tell a number : ";
//     cin>>N;
//     int mask=1;
//     while(mask<N){
//         mask = (mask<<1) + 1 ;
//     }
//     cout<< (mask^N) <<" is the complement of base 10.";
// }