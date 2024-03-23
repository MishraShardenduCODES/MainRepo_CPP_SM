#include<bits/stdc++.h>
using namespace std;

#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define fr(i, len) for(int i = 0; i < len; i++)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
#define N 1000
typedef vector<vector<int>> vvint;
typedef vector<string> vstr;
typedef vector<int> vint;
typedef long long int ll;
typedef const int c_int;
typedef double dbl;
int InversionCount = 0;
c_int MOD = 1e9 + 7;
c_int Mx_row = 100;
c_int Mx_col = 100;

void mke_arr(int arr[],int len){
    cout<<"Tell all the elements : ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
}
void prnt_arr(int arr[],int len){
    cout<<"The elements of the array are : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
void mke_vec(vector<int>&vec,int len) {
    cout << "Tell all the elements : ";
    vec.resize(len);
    for (int i = 0; i < len; i++) {
        cin >>vec[i];
    }
}
void prnt_vec(vector<int>&vec) {
    cout << "The elements of the vector are : ";
    int len = vec.size();
    for (int i = 0;i<len;i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}
void swp(int& a, int& b) {
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
}
int main(){
    // int len;
    // cout<<"Tell the length : ";
    // cin>>len;
    // int arr[len];
    // mke_arr(arr,len);
    // prnt_arr(arr,len);
    // nl;
    // vector<int>v(len,0);
    // mke_vec(v,len);
    // prnt_vec(v);
    // nl;
    int a = 10;
    int b = 2;
    swp(a,b);
    cout<<a<<" "<<b;
}