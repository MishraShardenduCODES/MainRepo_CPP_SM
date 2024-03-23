#include<bits/stdc++.h>
using namespace std;

#define fr(i, len) for(int i = 0; i < len; i++)
#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
typedef long long int ll;
typedef const int c_int;
typedef vector<int> vnt; 
typedef double dbl;
c_int MOD = 1e9 + 7;
c_int Mx_row = 100;
c_int Mx_col = 100;
#define N 1000
int cnt = -1;
int lnr_srch(int *arr,int len,int key){
    if(len == 0) return false; cnt+=1;
    if(arr[0] == key) cout<<"The element "<<key<<" is present at index : "<<cnt;
    else return lnr_srch(arr+1,len-1,key);
}
int main() {
    int arr[] = {5,4,5,10,1,2,3,4,66};
    int key = 4;
    int len = sizeof(arr) / sizeof(arr[0]);
    if(!lnr_srch(arr,len,key)) cout<<"The element is not inside the array";
    return 0;
}

