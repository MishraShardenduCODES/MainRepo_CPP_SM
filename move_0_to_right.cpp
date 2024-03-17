#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl cout<<"\n";
#define dbl double
#define N 1000

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
    int arr[] = {1,4,0,0,8,7,0,2,3,0};
    int j=0;
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j++]);
        }
    }
    for(int i:arr){
        cout<<i<<" ";
    }

}