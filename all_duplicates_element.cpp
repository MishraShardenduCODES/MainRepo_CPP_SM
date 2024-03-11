//all elements come either once or twice 
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
    sort(arr,arr+len);
    vector<int>ans;
    for(int i = 0; i < len - 1; i++) {
        if(arr[i] == arr[i + 1]) {
            ans.push_back(arr[i]);
            i++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}