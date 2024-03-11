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
    int arr2[len];
    mke_arr(arr2);
    nl;
    prnt_arr(arr2);
    nl;
    vector<int>ans;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(arr[i]<arr2[j]){
                break;
            }
            if(arr[i] == arr2[j]){
                ans.push_back(arr2[j]);
                arr2[j]=-1;
            }
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<" "<<ans[i];
    }
}