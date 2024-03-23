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

const int size = 1e6;
bool sieve[size+1] ;

void create_Sieve(){
    fill_n(sieve,size+1,true);
    for(int i=2;i*i<=size;i++){
        if(sieve[i] == true){
            for(int j=i*i;j<=size;j+=i){
                sieve[j]=false;
            }
        }
    }
}
vnt generate_primes(int n) {
    vnt ds;
    for (int i=2;i*i<=n;i++){
        if(sieve[i]){
            ds.push_back(i);
        }
    }
    return ds;
}
int main() {
    create_Sieve();
    int l, r;
    cout << "Tell upper and lower limit : ";
    cin >> l >> r;

    // Use len directly from dummy size
    int len = r - l + 1;
    int dummy[len];
    fr(i, len) {
        dummy[i] = 1;
    }

    vnt primes = generate_primes(r);
    for (auto pr : primes) {
        int frst_multiple = (l / pr) * pr;
        for (int j = max(frst_multiple, pr * pr); j <= r; j += pr) {
            dummy[j - l] = false;
        }
    }

    dummy[0] = dummy[1] = false;
    for (int i = l; i <= r; i++) {
        if (dummy[i]) {
            cout << i << " is a prime number.\n";
        }
    }
}