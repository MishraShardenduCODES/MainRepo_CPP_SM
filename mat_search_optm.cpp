//  THIS METHOD PRE ASSUSMES THAT THE COLUMN AND ROW ARE ALREADY SORTED LIKE : 
//   1  4  7
//   2  5  8
//   3  6  9

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
    int n,m;
    cout<<"Tell the length of the matrix : ";
    cin>>n>>m;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Tell the element ( "<<i<<" , "<<j<<" ) : ";
            cin>>mat[i][j];
        }
    }
    int row=0,column=m-1,target,stpr=0;
    cout<<"Tell the element you wannna find : ";
    cin>>target;
    while(row<n and column>=0){
        if(mat[row][column]==target){
            cout<<"The element is found at index : "<<row<<" , "<<column;
            stpr=1;
            break;
        }
        if(mat[row][column] > target){
            column -= 1;
        }
        if(mat[row][column] < target){
            row += 1;
        }
    }
    if(stpr==0){
        cout<<"The element is not present in the matrix ";
    }

    return 0;
}