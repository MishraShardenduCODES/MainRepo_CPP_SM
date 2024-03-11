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
            break;
        }else if(key<arr[mid]){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    if(stpr){
        cout<<"-1";
        return 0;
    }
    int i=mid,j=mid;
    while((i > 0 && arr[i-1] == arr[mid]) || (j < len - 1 && arr[j+1] == arr[mid])){
        if(arr[i-1] == arr[mid]){
            i-=1;
        }
        if(arr[j+1] == arr[mid]){
            j+=1;
        }
    }
    nl;
    cout<<"The first occurrence is at "<<i<<" and the last occurrence is at "<<j;
}