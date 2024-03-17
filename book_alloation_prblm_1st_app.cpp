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
bool isPossible(int arr[],int n,int m,int mid){
    int std_cnt=0,pg_sum=0;
    for(int i=0;i<n;i++){
        if(pg_sum + arr[i] <= mid){
            pg_sum+=arr[i];
        }else{
            std_cnt+=1;
            if(std_cnt>=m || arr[i]>mid){
                return false;
            }
            pg_sum=arr[i];
        }
    }
    return true;
}
int alloc_books(int arr[],int n,int m){
    int l=0,r=0,ans=-1,mid;
    for(int i=0;i<n;i++){
        r+=arr[i];
    }
    while(l<=r){
        mid=l+(r-l)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            r=mid-1;  
        }else{
            l=mid+1;
        }
    }
    return ans;
}

int main(){
    int no_std,len;
    cout<<"Tell the no of students : ";
    cin>>no_std;
    cout<<"Tell the number of books : ";
    cin>>len;
    int arr[len];
    mke_arr(arr,len);
    prnt_arr(arr,len);
    nl;
    cout<<"The max of min element is  : "<<alloc_books(arr,len,no_std);
    return 0;
}