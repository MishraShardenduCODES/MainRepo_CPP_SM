#include <bits/stdc++.h>
using namespace std;

#define nl cout << "\n";
#define N 1000
#define ll long long int
#define dbl double

ll binSrch(int n) {
    ll l = 0, r = n - 1,m,ans;
    while (l <= r) {
        m = l + (r - l) / 2;
        ll sqr = m * m;
        if (sqr == n) {
            return m;
        }
        if (sqr < n) {
            ans = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return ans;
}

dbl prsnNum(int n, int prsn, int num) {
    dbl factor = 1.0;
    dbl ans = num;
    for (int i = 0; i < prsn; i++) {
        factor *= 0.1;
        for (dbl j = 0; j * j < n; j += factor) {
            ans = j;
        }
    }
    return ans;
}

int main() {
    int num;
    cout << "Tell a number : ";
    cin >> num;

    int intRoot = binSrch(num);
    cout << "The root is : " << prsnNum(num, 8, intRoot);
    return 0;
}
