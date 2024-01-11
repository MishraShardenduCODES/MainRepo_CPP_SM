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
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<" "<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    int rowstart = 0,rowend = n-1,columnstart=0,columnend=m-1;
    while(rowstart<=rowend && columnstart<=columnend){
        for(int col=columnstart;col<=columnend;col++){
            cout<<" "<<mat[rowstart][col]<<" ";
        }
        rowstart++;
        for(int row=rowstart;row<=rowend;row++){
            cout<<" "<<mat[row][columnend]<<" ";
        }
        columnend--;
        for(int col=columnend;col>=columnstart;col--){
            cout<<" "<<mat[rowend][col]<<" "; 
        }
        rowend--;
        for(int row=rowend;row>=rowstart;row--){
            cout<<" "<<mat[row][columnstart]<<" ";
        }
        columnstart++;
    }
    return 0;
}