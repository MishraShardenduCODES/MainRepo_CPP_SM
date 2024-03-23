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

int main(){
    // int*num = new int;
    // cin >>*num;
    // cout<<*num;
    // delete num;
    // nl;

    int n;
    cin>>n;
    int*arr = new int[n];
    fr(i,n){
        cin>>arr[i];
    }
    fr(i, n) {
        cout << arr[i] << " ";
    }
    delete[] arr;
}
