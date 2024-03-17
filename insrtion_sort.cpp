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
void insrtn_sort(int arr[], int len) {
    for(int i=1;i<len;i++){
        int temp = arr[i];
        int j = i-1;
        while( j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=temp; 
    }
}

int main(){
    cout<<"Tell the number of elements in an array : ";
    int n;
    cin>>n;
    int arr[n];
    mke_arr(arr,n);
    prnt_arr(arr,n);
    nl;
    insrtn_sort(arr,n);
    prnt_arr(arr,n);
    nl;
}