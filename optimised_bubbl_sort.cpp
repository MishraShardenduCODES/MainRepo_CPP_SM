//bubble sort (optimised) c++
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
using namespace std;
int main(){
    int q;
    cout<<"Tell how many elements you want in an array : ";
    cin>>q;
    int arr[q];
    for(int i=0;i<q;i++){
        cout<<"Tell element no. "<<i<<" :";
        cin>>arr[i];
    }
    int temp=0;
    for(int i=0;i<q;i++){
        for(int j=0;j<q-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i = 0; i < q; i++) {
        cout << arr[i] << " ";
    }
}
