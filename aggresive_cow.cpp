#include<bits/stdc++.h>
using namespace std;

#define len_arr int len; cout<<"Tell the length : "; cin>>len; int arr[len];
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
bool isPossible(int arr[],int no_cows ,int mid){
    int len = sizeof(arr)/sizeof(arr[0]);
    int cowCnt = 1;
    int lastPos = arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]-lastPos>=mid){
            cowCnt+=1;
            if(cowCnt==no_cows){
                return true;
            }
            lastPos=arr[i];
        }
    }
    return false;
}
int aggrCow(int arr[],int no_cows){
    int len = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+len);
    int s=0,maxi=-1;
    for(int i=0;i<len;i++){
        maxi = max(maxi,arr[i]);
    }
    int l=0,ans=-1,r=maxi,mid;
    while(l<=r){
        mid = l+(r-l)/2;
        if(isPossible(arr,no_cows,mid)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }    
    return ans;
}
int main() {
    int no_cows, n;
    cout << "Tell the number of cows and number of elements in array : ";
    cin >> no_cows >> n;
    int arr[n];
    mke_arr(arr, n);
    cout << "The maximum distance between adjacent cows such that each cow can be placed in a separate stall is: ";
    cout << aggrCow(arr, no_cows);
    return 0;
}