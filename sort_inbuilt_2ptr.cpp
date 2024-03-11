#include <iostream>
#include <algorithm>
using namespace std;

#define nl cout<<"\n";

void prnt_arr(int arr[], int len) {
    cout << "The elements of the array are: ";
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
}

void mke_arr(int arr[], int len) {
    cout << "Tell all the elements: ";
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
    }
}

int main(){
    int arr1[]={0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    int arr2[]={0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};    
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    sort(arr1,arr1+len1);
    int i=0,j=len2-1;
    while(i<j){
        if(arr2[i] == 1 && arr2[j] == 0){
            int temp=arr2[i];
            arr2[i]=arr2[j];
            arr2[j]=temp;
            i+=1;
            j-=1;
        }
        if(arr2[i] == 0){
            i++;
        }
        if(arr2[j]==1){
            j--;
        }
    }
    cout<<"After sorting : \n";
    prnt_arr(arr1,len1); 
    nl;
    prnt_arr(arr2,len2);
    nl;
    return 0;
}