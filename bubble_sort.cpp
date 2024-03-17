#include<bits/stdc++.h>
using namespace std;

#define len_arr int len; cout<<"Tell the length : "; cin>>len; int arr[len];
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
void bubble_sort(int arr[],int len){
    for(int i=1;i<len-1;i++){
        bool swpd = false;
        for(int j=0;j<len-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swpd = true;
            }
        }
        if(swpd == false){
            break;
        }
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
    bubble_sort(arr,n);
    prnt_arr(arr,n);
}