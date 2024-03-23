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

inline bool pal(string& str, int i) {
    if (i >= str.length() / 2) return true;
    if (str[i] != str[str.length() - 1 - i]) return false;
    return pal(str, i + 1);
}
int main(){
    string str = "abba";
    int i = 0;
    if(pal(str,i)) cout<<"The string "<<str<<" is a palindrome.";
    else cout<<"It's not";
}