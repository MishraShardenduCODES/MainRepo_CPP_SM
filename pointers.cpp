#include<bits/stdc++.h>
using namespace std;

#define fr(i, len) for(int i = 0; i < len; i++)
#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
#define N 1000
typedef long long int ll;
typedef const int c_int;
typedef vector<int> vnt;
typedef double dbl;
c_int MOD = 1e9 + 7;
c_int Mx_row = 100;
c_int Mx_col = 100;

int main() {
    int arr[] = {1, 2, 3};
    int *p = arr;

    (*p)++;  // Increment the value pointed to by p
    cout << *p << endl;  // Output: 2
    for(int i:arr) cout<<i<<" "; // arr = {2 , 2 , 3} 
    nl;

    p+=2;
    cout<< *p <<endl;
    for(int i:arr) cout<<i<<" ";
    nl;

    int arr1[] = {1, 2, 3};
    int *p1 = arr1;

    cout << *p1++ << endl;  // Output: 1 (value pointed to by p)
    cout << *p1 << endl;    // Output: 2 (value at the next memory location)
    for(int i:arr1) cout<<i<<" ";

    return 0;
}
