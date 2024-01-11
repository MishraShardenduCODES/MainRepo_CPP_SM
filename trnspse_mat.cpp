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
    cin>>m;
    n=m;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Tell the element ( "<<i<<" , "<<j<<" ) : ";
            cin>>mat[i][j];
        }
    }
    cout<<"The actaul matrix : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<" "<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i<j){
                int temp=mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=temp;
            }
        }
    }
    // WE CAN ALSO WRITE IT IN THIS WAY 
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<m;j++){
    //         int temp=mat[i][j];
    //         mat[i][j]=mat[j][i];
    //         mat[j][i]=temp;
    //     }
    // }
    cout<<endl<<endl;
    cout<<"The transpose matrix : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<" "<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}