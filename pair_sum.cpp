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
    int a,stpr=0;
    cout<<"Tell teh length of array you want : ";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cout<<"Tell an element : ";
        cin>>arr[i];
    }
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                stpr=1;
            }
        }
        if(stpr==0){
            break;
        }
    }
    stpr=0;
    int left=0,right=a-1,key;
    cout<<"Tell the sum taht you want to check : ";
    cin>>key;
    while(left<right){
        int sum = arr[left] + arr[right];
        if(sum>key){
            right--;
        }else if(sum<key){
            left++;
        }else if(sum==key){
            cout<<"The sum of the element "<<left<<" and "<<right<<" = "<<key;
            stpr=1;
            break; 
        }
    }
    if(stpr==0){
        cout<<"The sum can not constitute of any pairof element.";
    }
    return 0;
}