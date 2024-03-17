#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dbl;
#define nl cout<<"\n";
const int N = 1000;

int prnt_arr(int arr[],int len){
    cout<<"The elements of the array are : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
int mke_arr(int arr[],int len){
    cout<<"Tell all the elements : ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
}
int main(){
    int l1,l2;
    cout<<"Tell the length of the 2 array : ";
    cin>>l1>>l2;
    int a1[l1],a2[l2];
    mke_arr(a1,l1);
    prnt_arr(a1,l1);
    nl;
    mke_arr(a2,l2);
    prnt_arr(a2,l2);
    nl;
    vector<int>v;
    int i=l1-1,j=l2-1;
    int carry=0;
    while(i>=0 && j>=0){
        int sum = a1[i--] + a2[j--] + carry;
        carry = sum / 10;
        sum = sum % 10;
        v.push_back(sum);
    }
    while(i>=0){
        int sum = a1[i--] + carry;
        carry = sum / 10;
        sum = sum % 10;
        v.push_back(sum);
    }
    while(j>=0){
        int sum = a2[j--] + carry;
        carry = sum / 10;
        sum = sum % 10;
        v.push_back(sum);
    }
    if (carry != 0) {
        v.push_back(carry);
    }
    reverse(v.begin(),v.end());
    cout<<"The ans is : ";
    for(auto i:v){
        cout<<i<<" ";
    }
}
