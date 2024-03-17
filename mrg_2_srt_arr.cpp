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
vector<int> mrg_arr(int arr1[],int arr2[],int len1,int len2){
    vector <int> v;
    int i=0,j=0;
    while(i<len1 && j<len2){
        if(arr1[i] > arr2[j]){
            v.push_back(arr2[j++]);
        }else{
            v.push_back(arr1[i++]);
        }
    }
    while(i<len1){
        v.push_back(arr1[i++]);
    }
    while(j<len2){
        v.push_back(arr2[j++]);
    }
    return v;
}
int main(){
    int len1,len2;
    cout<<"Tell the length of the two array : ";
    cin>>len1>>len2;
    int arr1[len1],arr2[len2];
    mke_arr(arr1,len1);
    sort(arr1, arr1 + len1);
    prnt_arr(arr1,len1);
    nl;

    mke_arr(arr2,len2);
    sort(arr2, arr2 + len2);
    prnt_arr(arr2,len2);
    nl;

    cout<<"The merged array is given by : ";
    vector<int>v = mrg_arr(arr1,arr2,len1,len2);
    for(int i:v){
        cout<<i<<" ";
    }
}