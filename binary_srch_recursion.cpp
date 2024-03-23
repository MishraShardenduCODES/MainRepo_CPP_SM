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
int bnry_srch(int* arr,int len,int key,int l,int r,int mid){
    if(l > r) return false;
    mid = l + (r - l)/2 ;
    if(arr[mid] == key){
        cout<<"The element is "<<key<<" it is at "<<mid;
        return true;
    }else if (arr[mid] < key){
        l = mid + 1;
        bnry_srch(arr,len,key,l,r,mid);
    }else{
        r = mid - 1;
        bnry_srch(arr,len,key,l,r,mid);
    }
}
int main(){
    int arr[] = {102,123,43,54,56,87,78,90,2,6,5,1,100,10,3,4,66};
    int key = 90;
    int len = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+len);
    cout<<"The array is : ";
    fr(i,len) cout<<arr[i]<<" ";
    nl;
    int l = 0,r = len-1,mid;
    if(!bnry_srch(arr,len,key,l,r,mid)) cout << "The elemnt is not in the array.";
    return 0;
}

