#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
#include<vector>
#include<math.h>
using namespace std;

int main(){
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of the array:\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  // Sorting logic remains the same
  for (int i = 0; i < n - 1; i++) {
    bool is_sorted = true;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        is_sorted = false;
      }
    }
    if (is_sorted) {
      break;  // Early termination if already sorted
    }
  }
  cout << "Sorted array:\n";
  for (int i = 0; i < n; i++) {
    cout<<arr[i] << " ";
  }
  cout<<endl;
  int key2,l=0,r=n-1,mid,stpr2=0;
  cout<<"Tell the elemnet you wanna find: ";
  cin>>key2;
  while(l<=r){
    mid=l + (r-l)/2;
    if(key2==arr[mid]){
        cout<<"The element "<<key2<<" is at "<<mid<<" index";
        stpr2=1;
        break;
    }else if(key2>arr[mid]){
        l=mid+1;
    }else{
        r=mid-1;
    }
  }
  if(stpr2==0){
    cout<<"The element "<<key2<<" is not in the array";
  }
  return 0;
}
