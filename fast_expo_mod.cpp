#include<bits/stdc++.h>
using namespace std;

#define fr(i, len) for(int i = 0; i < len; i++)
#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
typedef long long int ll;
typedef const int c_int;
typedef vector<int> vnt;
typedef double dbl;
c_int Mx_row = 100;
c_int Mx_col = 100;
#define N 1000

int main(){
    int a,b,m;
    cout<<"Tell a , b and m : ";
    cin>>a>>b>>m;
    int res = 1;
    while(b!=0){
        if(a&1){
            res = 1ll * (res * (a%m))%m;
        }
        a = 1ll * ((a%m)*(a%m))%m;
        b = b>>1;
    }
    cout<<res<<" ";
    return 0;
}