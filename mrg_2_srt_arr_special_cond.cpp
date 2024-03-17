#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl cout<<"\n";
#define dbl double
#define N 1000

// int prnt_arr(int arr[],int len){
//     cout<<"The elements of the array are : ";
//     for(int i=0;i<len;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int mke_arr(int arr[],int len){
//     cout<<"Tell all the elements : ";
//     for(int i=0;i<len;i++){
//         cin>>arr[i];
//     }
// }
int main(){
    int arr1[6]={1,2,3,0,0,0};
    int arr2[3]={2,5,6};
    int i=0,j=0;
    while(arr1[i]!=0){
        if(arr1[i]<=arr2[j]){
            i+=1;
            continue ;
        }else{
            int temp =arr1[i];
            arr1[i]=arr2[j];
            arr2[j]=temp;
        }
    }
    while(i<6){
        arr1[i++]=arr2[j++];
    }
    for(int k : arr1){
        cout<<k<<" ";
    }
}