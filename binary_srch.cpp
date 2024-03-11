#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define N 1000

void prnt_arr(int arr[],int len){
    cout<<"The elements of the array are : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
void mke_arr(int arr[],int len){
    cout<<"Tell all the element : ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
}
int main(){
    int len,key;
    cout<<"Tell the length : ";
    cin>>len;
    cout<<"Tell the key element : ";
    cin>>key;
    int arr[len];
    mke_arr(arr,len);
    sort(arr,arr+len);
    prnt_arr(arr,len);

    int l=0,r=len-1,stpr=1,mid;
    while(l<=r){
        mid = l + (r-l)/2;
        if(arr[mid] == key){
            stpr=0;
            cout<<"\nThe element "<<arr[mid]<<" is at "<<mid<<" index.";
            break;
        }else if(key<arr[mid]){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    if(stpr){
        cout<<"\nThe element is not in the array.";
    }
}