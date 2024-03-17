#include <bits/stdc++.h>
using namespace std;

#define fr(i, len, n) for(int i = 0; i < len; i += n)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
typedef long long int ll;
typedef double dbl;
const int N = 1000;
 
bool chck_equal(int arr1[], int arr2[]) {
    for (int i = 0; i < 26; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}
 
void chck_inclsn(string s1, string s2) {
    int cnt[26] = {0};
    for (char c : s1) {
        cnt[c - 'a']++;
    }

    int window_len = s1.length();
    for (int i = 0; i + window_len <= s2.length(); i++) {
        int cnt2[26] = {0};
        for (int j = i; j < i + window_len; j++) {
            cnt2[s2[j] - 'a']++;
        }
        if (chck_equal(cnt, cnt2)) {
            cout << "The permutation is available in the second string\n";
            return;  // Exit the function if permutation is found
        }
    }
    cout << "The permutation is not available in the second string\n";
}
 
int main() {
    string s1, s2;
    cout<<"Tell the string that you want to permutate : ";
    getline(cin, s1);
    tas;
    getline(cin, s2);
    chck_inclsn(s1, s2);
    return 0;
}