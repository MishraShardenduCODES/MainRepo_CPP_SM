#include<bits/stdc++.h>
using namespace std ;

#define nl cout<<"\n";
#define N 1000

void prnt_arr(int arr[],int len){
    cout<<"The elements of the array are : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
void mke_arr(int arr[],int len){
    cout<<"Tell all the element : ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
}

int main(){
    int len,len2;
    cout<<"Tell the length of the two arrays : ";
    cin>>len>>len2;

    int arr[len],arr2[len2];
    mke_arr(arr,len);
    prnt_arr(arr,len);
    nl;

    mke_arr(arr2,len2);
    prnt_arr(arr2,len2);
    nl;

    vector<int>ans;
    int i = 0,j = 0;
    while(i<len && j<len2){
        if(arr[i] == arr2[j]){
            ans.push_back(arr[i]);
            i++;
            j++;
        }else if(arr[i]<arr2[j]){
            i+=1;
        }else{
            j+=1;
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        if(ans[i] == ans[i+1]){
            ans.erase(ans.begin()+i);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}