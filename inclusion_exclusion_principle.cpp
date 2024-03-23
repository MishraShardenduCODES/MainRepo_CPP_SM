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
    int a,b,num;
    cout<<"Tell the number and the two number from whom u want to check the inclusion and exclusion : ";
    cin>>num>>a>>b;
    cout<<"The number of value which are divisible by "<<a<<" and "<<b<<" but not by a*b are : "<<(num/a + num/b - num/(a*b));
    return 0;
}