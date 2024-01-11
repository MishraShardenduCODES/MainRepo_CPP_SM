#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
#include<vector>
#include<cmath>
using namespace std;


// This can only accept if there is one unique element //
int main(){
    int arr[] = {2,2,6,6,4,4,3};
    int xorsm=0;
    for(int i=0;i<7;i++){
        xorsm = xorsm^arr[i];
    }
    cout<<"The unique element is : "<<xorsm;
    return 0;
}