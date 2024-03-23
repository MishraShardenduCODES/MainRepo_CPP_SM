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
int cnt = 0;
int rch_str(int n){
    if (n>0) return 0;
    if (n <= 1) return 1;
    cnt+=1;
    return rch_str(n-1) + rch_str(n-2);
}
int main(){
    int n; 
    cout<<"Tell the number of stairs : "; cin>>n;
    rch_str(n);
    cout<<"No. of ways : "<<cnt;
}

// second method 
// #include<bits/stdc++.h>
// using namespace std;

// #define fr(i, len) for(int i = 0; i < len; i++)
// #define frb(i, len) for(int i = len-1; i >= 0; i--)
// #define tas cout<<"Tell a string : ";
// #define nl cout<<"\n";
// typedef long long int ll;
// typedef const int c_int;
// typedef vector<int> vnt; 
// typedef double dbl;
// c_int MOD = 1e9 + 7;
// c_int Mx_row = 100;
// c_int Mx_col = 100;
// #define N 1000
// int cnt = 0;
// int rch_str(int n){
//     if (n < 0) return 0;
//     else if (n == 0) return 1;
//     int ans = rch_str(n-1) + rch_str(n-2);
//     return ans;
// }
// int main(){
//     int n; 
//     cout<<"Tell the number of stairs : "; cin>>n;
//     int cnt = rch_str(n);
//     cout<<"No. of ways : "<<cnt;
// }