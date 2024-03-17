#include<bits/stdc++.h>
using namespace std;

#define fr(i, len) for(int i = 0; i < len; i++)
#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
typedef long long int ll;
typedef double dbl;
typedef const int c_int;
c_int Mx_row = 100;
c_int Mx_col = 100;
#define N 1000

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
int main(){
    int len;
    cout<<"Tell the length : ";
    cin>>len;
    int arr[len];
    mke_arr(arr,len);
    prnt_arr(arr,len);
    nl;
    vector<int>v(len,0);
    mke_vec(v,len);
    prnt_vec(v);
    nl;
}