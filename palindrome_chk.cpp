#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define nl cout<<"\n";
typedef double dbl;
const int N = 1000;

string rvrs(string str){
    for (auto i = 0; i < str.size() / 2; i++) {
        char s = str[i];
        str[i] = str[str.size() - i - 1];
        str[str.size() - i - 1] = s;
    }
    return str;
}

int main(){
    string str;
    cin >> str;
    bool isPalindrome = true;
    
    // Check for palindrome by comparing characters from both ends of the string
    for (size_t i = 0; i < str.size() / 2; i++) {
        if (str[i] != str[str.size() - i - 1]) {
            isPalindrome = false;
            break;  // No need to continue checking if a mismatch is found
        }
    }
    
    if (isPalindrome) {
        cout << "It's a Palindrome";
    } else {
        cout << "It's not";
    }

    return 0;
}
