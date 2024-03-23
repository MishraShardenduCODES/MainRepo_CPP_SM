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

void solve(string dgts, string output, int idx, vstr& ans, string mapping[]) {
    if (idx >= dgts.length()) {
        ans.push_back(output);
        return;
    }

    int num = dgts[idx] - '0';
    string val = mapping[num];

    for (int i = 0; i < val.length(); i++) {
        output.push_back(val[i]);
        solve(dgts, output, idx + 1, ans, mapping);
        output.pop_back();
    }
}

vstr letter_combo(string dgts){
    vstr ans;
    if(dgts.length() == 0) return ans;
    string output;
    int idx = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
    solve(dgts,output,idx,ans,mapping);
    return ans;
}

int main(){
    string num ;
    cout<<"Tell the numbers : ";
    cin>>num;
    vstr ans = letter_combo(num);
    cout<<"The possible pattern can be : ";
    for(auto i : ans) cout<<i<<" ";
}