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
bool isPossible(int arr[],int no_std,int no_bks,int mid){
    int std_cnt=0,pg_sm=0;
    for(int i=0;i<no_bks;i++){
        if(pg_sm + arr[i] <= mid){
            pg_sm += arr[i];
        }else{
            std_cnt+=1;
            if(std_cnt > no_std || arr[i]>mid){
                return false;
            }
            pg_sm = arr[i];
        }
    }
    return true;
}

int allocBooks(int arr[],int no_std,int no_bks){
    int l=0,r=0,mid,ans=-1;
    for(int i=0;i<no_bks;i++){
        r+=arr[i];
    }
    while(l<=r){
        mid = l+(r-l)/2;
        if(isPossible(arr,no_std,no_bks,mid)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return ans;
}

int main() {
    int no_pntrs, no_unts;
    cout << "Tell the number of painters and the number of units: ";
    cin >> no_pntrs >> no_unts;
    int arr[no_unts];
    mke_arr(arr, no_unts);
    cout<<"The maximum of the minimum time required is: " <<allocBooks(arr, no_pntrs, no_unts);
    return 0;
}
