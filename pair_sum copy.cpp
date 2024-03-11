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
    int len;
    cout<<"Tell the length of the array : ";
    cin>>len;
    int arr[len];
    mke_arr(arr,len);
    prnt_arr(arr,len);
    nl;
    int i = 0,j = len-1,key,stpr=1;
    cout<<"Tell the pair sum : ";
    cin>>key;
    while(i < j){
        int sum = arr[i] + arr[j];
        if(sum == key){
            cout<<"The sum of elements at the index "<<i<<" ( "<<arr[i]<<" ) "<<" and "<<j<<" ( "<<arr[j]<<" ) "<<" gives the sum = "<<sum;
            nl;
            i+=1;
            j-=1;
            stpr=0;
        }
        if(sum>key){
            j-=1;
        }
        if(sum<key){
            i+=1;
        }
    }
    if(stpr){
        cout<<"The pair sum is not present in the array";
        nl;
    }
    return 0;
}

