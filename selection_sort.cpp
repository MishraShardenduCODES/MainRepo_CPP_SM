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
void selection_sort(int arr[], int len) {
    for(int i = 0; i < len - 1; i++) {
        int mnIndx = i;
        for(int j = i + 1; j < len; j++) {
            if(arr[j] < arr[mnIndx]) {
                mnIndx = j;
            }
        }
        swap(arr[i], arr[mnIndx]); // Move the swap outside of the inner loop
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
    selection_sort(arr,n);
    prnt_arr(arr,n);
    nl;
}