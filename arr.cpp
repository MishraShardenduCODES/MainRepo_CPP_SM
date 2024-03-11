#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define N 1000
int mx = INT_MIN,mn = INT_MAX;

void prnt_arr(int arr[],int len){
    cout<<"The elements of the array are : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
        mx = max(mx,arr[i]);
        mn = min(mn,arr[i]);
    }
    nl;
    cout<<"The maximum value in the array is : "<<mx;
    nl;
    cout<<"The minimum value in the array is : "<<mn;
}

void mke_arr(int arr[],int len){
    cout<<"Tell all the element : ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
}

int main(){
    int len;
    cout<<"Tell how many elements : ";
    cin>>len;
    int arr[len];
    mke_arr(arr,len);
    prnt_arr(arr,len);

}