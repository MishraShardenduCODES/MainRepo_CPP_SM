#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define N 1000
#define len_arr int len; cout<<"Tell the length : "; cin>>len; int arr[len];

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

int getPvt(int arr[],int len){
    int l=0,r=len-1,m;
    while(l<r){
        m= l+(r-l)/2;
        if(arr[m] < arr[0]){
            l=m+1;
        }else{
            r=m;
        }
    }
    return l;
}

int binSrch(int arr[],int l, int r, int key){
    while(l<=r){
        int m = l + (r-l)/2;
        if(arr[m] == key){
            return m;
        }else if(arr[m] < key){
            l = m+1;
        }else{
            r = m-1;
        }
    }
    return -1;
}

int main(){
    int arr[5]={27,118,1,22,35};
    int key = 118;
    int len = 5;
    
    // Find the pivot point
    int pvt = getPvt(arr,len);
    
    // Check if the key belongs to the first or second half of the array
    int idx = -1;
    if(arr[pvt] <= key && key <= arr[len-1]){
        // Key belongs to the second half of the array
        idx = binSrch(arr, pvt, len-1, key);
    }else{
        // Key belongs to the first half of the array
        idx = binSrch(arr, 0, pvt-1, key);
    }
    
    if(idx != -1){
        cout << "Element found at index: " << idx;
    }else{
        cout << "Element not found";
    }
    
    return 0;
}
