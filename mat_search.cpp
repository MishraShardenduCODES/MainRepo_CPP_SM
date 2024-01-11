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
    int key;
    cout<<"Tell the element ypu wanna serch : ";

    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Tell the element ( "<<i<<" , "<<j<<" ) : ";
            cin>>mat[i][j];
        }
    }
    int stpr=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(key==mat[i][j]){
                cout<<"The element is found at ("<<i<<" , "<<j<<") index";
                stpr=1;
                break;
            }
        }
    }
    if(stpr==0){
        cout<<"The element is not found !!";
    }
    cout<<"The actaul matrix : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<" "<<mat[i][j]<<" ";
        }
        cout<<endl;
    }