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

float gcd(float a,float b){
    if(a == 0) return b;
    if(b == 0) return a;

    while(a!=b){
        if(a>b) a = a - b ;
        if(b>a) b = b - a ;
    }
    return a;
}
int main(){
    float num1,num2;
    cout<<"Tell the two numbers : ";
    cin>>num1>>num2;
    float gcd_num = gcd(num1,num2) ;
    float lcm_num = (num1*num2)/gcd_num ;
    cout<<"The GCD is given by : "<<gcd_num ; nl;
    cout<<"The LCM is given by : "<<lcm_num ; nl;
}