#include<bits/stdc++.h>
using namespace std;

#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define fr(i, len) for(int i = 0; i < len; i++)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
#define N 1000
typedef vector<string> vstr;
typedef vector<int> vint;
typedef long long int ll;
typedef const int c_int;
typedef double dbl;
int InversionCount = 0;
c_int MOD = 1e9 + 7;
c_int Mx_row = 100;
c_int Mx_col = 100;

vstr all_subsets(string str) {
    int len = str.length();
    vstr ans;
    for (int num = 0; num < (1 << len); num++) {
        string sub = "";
        for (int i = 0; i < len; i++) {
            if (num & (1 << i)) {
                sub += str[i];
            }
        }
        if (!sub.empty()) {
            ans.push_back(sub);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    string str;
    cin >> str;
    vstr ans = all_subsets(str);
    cout << "All the possible sets are: ";
    for (auto i : ans) {
        cout << i << " ";
    }
    return 0;
}