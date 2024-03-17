#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define nl cout<<"\n";
typedef double dbl;
const int N = 1000;

int main(){
    string str;
    cin >> str;
    for (size_t i = 0; i < str.size() / 2; i++) {
        char s = str[i];
        str[i] = str[str.size() - i - 1];
        str[str.size() - i - 1] = s;
    }
    cout << str;
}
