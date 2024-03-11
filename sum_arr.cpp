#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define N 1000
int mx = INT_MIN,mn = INT_MAX;
int sum = 0,len;
void prnt_arr(int arr[]){
    cout<<"The elements of the array are : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}

void mke_arr(int arr[]){
    cout<<"Tell all the element : ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
}

int main(){
    cout<<"Tell the length of array : ";
    cin>>len;
    int arr[len];
    mke_arr(arr);
    prnt_arr(arr);
    cout<<"The sum of the element in the array is : "<<sum;
    return 0;
}