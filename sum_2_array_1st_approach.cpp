#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dbl;
#define nl cout<<"\n";
const int N = 1000;

int prnt_arr(int arr[], int len) {
    cout << "The elements of the array are : ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void mke_arr(int arr[], int len) {
    cout << "Tell all the elements : ";
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
}
void prnt_vec(vector<int>& vec) {
    cout << "The elements of the array are : ";
    for (auto i : vec) {
        cout << i << " ";
    }
    cout << endl;
}

void mke_vec(vector<int>& arr,int len) {
    cout << "Tell all the elements : ";
    arr.resize(len);
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
}
int main() {
    int l1, l2;
    cout << "Tell the length of the 2 arrays : ";
    cin >> l1 >> l2;
    
    vector<int> v1, v2;
    mke_vec(v1, l1);
    prnt_vec(v1);
    nl;
    mke_vec(v2, l2);
    prnt_vec(v2);
    nl;
    
    vector<int> v;
    int i = 0, j = 0;
    int si = 0, sj = 0, sum = 0;
    while (i < l1 || j < l2) {
        si = (si) * 10 + v1[i++];
        sj = (sj) * 10 + v2[j++];
        sum = si + sj;
    }
    while (sum != 0) {
        v.push_back(sum % 10);
        sum = sum / 10;
    }
    reverse(v.begin(), v.end());
    prnt_vec(v);
    return 0;
}
