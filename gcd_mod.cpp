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
    int a,b;
    cout<<"Tell the number to find GCD and LCM : " ; cin>>a>>b ;
    if(b>a) swap(a,b);
    int prd = a * b ;
    while(b!=0){
        int temp = a%b;
        a = b;
        b = temp;
    }
    cout<<"Gcd = "<<a<<"\n";
    cout<<"Lcm = "<<prd/a<<"\n";
    return 0;
}