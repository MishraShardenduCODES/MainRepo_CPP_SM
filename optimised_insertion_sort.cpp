//insertion sort (optimised) c++
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
    for(int i=1;i<=q;i++){
        int j=i-1;
        int current=arr[i];
        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i = 0; i < q; i++) {
        cout << arr[i] << " ";
    }
}
