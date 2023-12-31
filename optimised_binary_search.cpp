//binary search (optimised) c++
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
using namespace std;
int main(){
    int q,a;
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
    cout<<endl;
    cout<<"Tell the number you want to find : ";
    cin>>a;
    int left=0,right=q-1,stpr=0;
    while(left<right){
        int mid= left+(right-left)/2 ;
        if(a==arr[mid]){
            cout<<"The element is at "<<mid<<" index" ;
            stpr=1;
            break;
        }else if(a>arr[mid]){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    if(stpr == 0){
        cout<<"The elementis not present in the array \n";
    }
}
