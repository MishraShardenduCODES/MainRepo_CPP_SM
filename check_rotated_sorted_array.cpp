#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dbl;
#define nl cout<<"\n";
const int N = 1000;


int prnt_arr(const vector<int>& arr) {
    cout << "The elements of the array are: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

void mke_arr(vector<int>& arr) {
    int len;
    cout << "Tell the length: ";
    cin >> len;
    arr.resize(len);
    cout << "Tell all the elements: ";
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
    }
}
int main(){
    vector<int>a;
    mke_arr(a);
    prnt_arr(a);
    nl;
    int cnt = 0;
    for(int i = 1; i < a.size(); i++){
        if(a[i - 1] > a[i]){
            cnt += 1;
        }
    }
    if(a[a.size() - 1] > a[0]){
        cnt += 1;
    }

    if(cnt == 1){
        cout << "It's a Sorted Rotated array\n";
    } else {
        cout << "It's not a Sorted Rotated array\n";
    }
    return 0;
}