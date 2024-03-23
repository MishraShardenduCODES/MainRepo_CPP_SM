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
    int n2;
    cout<<"Tell the upper limit : ";
    cin>>n2;
    vector<bool>v(n2+1,true);
    v[0]=v[1]=false;
    int len=n2+1;
    for(int i=2;i<len;i++){
        if(v[i]){
            for(int j=i*2;j<n2+1;j+=i){
                v[j]=false;
            }
        }
    }
    for(int i=0;i<n2+1;i++) if (v[i]) cout<<i<<" is a prime n2ber\n";
}