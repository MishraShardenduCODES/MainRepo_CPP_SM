/*
In this the array has duplicates 
of numbers from 1 to N-1
*/
#include<bits/stdc++.h>
using namespace std ;

#define nl cout<<"\n";
#define N 1000
int len;
void prnt_arr(int arr[]){
    cout<<"The elements of the array are : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
void mke_arr(int arr[]){
    cout<<"Tell all the element : ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
}
int main(){
    cout<<"Tell the length : ";
    cin>>len;
    int arr[len];
    mke_arr(arr);
    nl;
    prnt_arr(arr);
    nl;
    int ans=0;
    for(int i=0;i<len;i++){
        ans=ans^arr[i];
    }
    //here the numbers from 1 to n-1 are there in the array 
    //so basically all the numebrs are atleast once in the array
    //with exception of one number being there twice;
    //when we xor all of them and then when we xor all of them again 
    //we get the duplicate element 
    for(int i=0;i<len;i++){
        ans=ans^i;
    }
    cout<<"The duplicate element is : "<<ans;
    
    return 0;
}