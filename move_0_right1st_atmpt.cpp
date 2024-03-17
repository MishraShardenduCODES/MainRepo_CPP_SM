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
    int len;
    cout<<"Tell the length : ";
    cin>>len;
    int arr[len];
    mke_arr(arr,len);
    prnt_arr(arr,len);
    nl;
    int i=0,j=len-1;
    while(i<=j){
        if(arr[i]==0 && arr[j]!=0){
            swap(arr[i++],arr[j--]);
        }else if(arr[j] == 0){
            j-=1;
        }else if(arr[i] != 0){
            i+=1;
        }
    }
    prnt_arr(arr,len);
}