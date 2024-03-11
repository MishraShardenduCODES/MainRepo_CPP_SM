#include<bits/stdc++.h>
using namespace std ;

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
    int key,len;
    cout<<"Tell the length : ";
    cin>>len;
    cout<<"Tell the element : ";
    cin>>key;
    int arr[len],stpr=1;
    mke_arr(arr,len);
    prnt_arr(arr,len);
    nl;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]+arr[j] == key){
                cout<<"The sum of elements at the index "<<i<<" ( "<<arr[i]<<" ) "<<" and "<<j<<" ( "<<arr[j]<<" ) "<<" gives the sum = "<<key;
                nl;
            }
        }
    }
    if(stpr==1){
        cout<<"There are no such elements!";
    }
}