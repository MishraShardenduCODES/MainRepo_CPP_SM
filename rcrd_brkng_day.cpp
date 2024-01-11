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
    int a;
    cout<<"Tell how many days : ";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cout<<"Tell how many visitors on day "<<i+1<<" : ";
        cin>>arr[i];
    }
    int mx = arr[0];
    int recordBreaks = 0;

    for(int i = 0; i < a; i++){
        if((i==0 && arr[i]>arr[i+1])||(i==a-1&&arr[i]>mx)||(arr[i]>arr[i+1]&&arr[i]>mx)){
            recordBreaks++;
            cout << "Day " << i + 1 << " is a RECORD BREAKING DAY !!" << endl;
        }
        mx = max(mx, arr[i]);
    }

    cout << "Total Record Breaking Days: " << recordBreaks << endl;

    return 0;
}
