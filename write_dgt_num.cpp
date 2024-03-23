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
int dgt_prnt(int n){

    switch (n) {
        case 0: cout << "Zero " ; break;
        case 1: cout << "One "  ; break;
        case 2: cout << "Two "  ; break;
        case 3: cout << "Three "; break;
        case 4: cout << "Four " ; break;
        case 5: cout << "Five " ; break;
        case 6: cout << "Six "  ; break;
        case 7: cout << "Seven "; break;
        case 8: cout << "Eight "; break;
        case 9: cout << "Nine " ; break;
    }
    return 0;
}

int num_tell(int n){
    if (n == 0) return 0;
    num_tell(n/10);
    dgt_prnt(n%10);
    return 0;
}

int main(){
    int a;
    cout<<"Tell : ";cin>>a;
    if (a == 0) cout << "Zero ";
    num_tell(a);
    return 0;
}
