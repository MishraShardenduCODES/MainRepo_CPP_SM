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
c_int MOD = 1e9 + 7;
c_int Mx_row = 100;
c_int Mx_col = 100;
#define N 1000

int pwr(int a,int b){
    if(b == 1) return a;
    if(b == 0) return 1;
    return a*pwr(a,b-1);
}

int main(){
    int a,b;
    cout<<"Tell the value of a and b : ";
    cin>>a>>b;
    cout<<"The ans is : "<<pwr(a,b);
    return 0;
}