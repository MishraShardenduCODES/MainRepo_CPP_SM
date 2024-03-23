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

void update(int& n){
    n+=1;
}
// int& func(int n){
//     int num = n;
//     int& ans = num;
//     return ans;
// }

// int* func(int n){
//     int* ptr = n;
//     return ptr
// }
int main(){
    int i = 10;
    int&j = i;
    j+=1;
    cout<<i;

    nl;
    int m=99;
    update(m);
    cout<<m;

    // though this works it is an extremely bad practice
    // nl;
    // int l = 10;
    // int x = func(l);
    // cout<<x;

    // nl;
    // int l1 = 10;
    // int x1 = func(l1);
    // cout<<x1;
}