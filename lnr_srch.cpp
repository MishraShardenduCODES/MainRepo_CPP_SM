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
    nl;
}

void mke_arr(int arr[]){
    cout<<"Tell all the element : ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    nl;
}

void srch_arr(int arr[],int key){
    int stpr=0,indx=0;
    for(int i=0;i<len;i++){
        if(key == arr[i]){
            stpr=1;
            indx=i;
            break;
        }
    }   
    if(stpr){
        cout<<"The element "<<key<<" in the array is present at "<<indx<<" index.";
    }else{
        cout<<"The element is not present in the array.";
    }
    nl;
}

int main(){
    int key;
    cout<<"Tell the length of the array : ";
    cin>>len;
    int arr[len];
    mke_arr(arr);
    prnt_arr(arr);
    cout<<"Tell the element you want to search : ";
    cin>>key;   
    srch_arr(arr,key);
    return 0;
}