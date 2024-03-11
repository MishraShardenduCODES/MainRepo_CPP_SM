#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define N 1000

bool uniqueOccurrences(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    vector<int> v;
    for (int i = 0; i < arr.size(); i++) {
        int cnt = 1;
        while (i + 1 < arr.size() && arr[i] == arr[i + 1]) {
            cnt++; 
            i++;
        }
        v.push_back(cnt);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] == v[i + 1]) return false;
    }
    return true;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    if (uniqueOccurrences(arr)) {
        cout << "Occurrences are unique\n";
    } else {
        cout << "Occurrences are not unique\n";
    }
    
    return 0;
}
