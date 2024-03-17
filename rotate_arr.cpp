#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dbl;
#define nl cout<<"\n";
const int N = 1000;


int prnt_arr(int arr[], int len) {
    cout << "The elements of the array are: ";
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
}
void mke_arr(int arr[],int len) {
    cout << "Tell all the elements: ";
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
    }
}
int main(){
    int len;
    cout << "Tell the length: ";
    cin >> len;
    int a[len];
    mke_arr(a,len);
    prnt_arr(a,len);
    nl;
    int num;
    cout<<"Tell how many times you want to rotate : ";
    cin>>num;
    int v[len];
    for(int i=0;i<len;i++){
        v[(i+num)%len] = a[i];
    }
    prnt_arr(v,len);
    return 0;
}