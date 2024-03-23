#include<bits/stdc++.h>
using namespace std;

#define fr(i, len) for(int i = 0; i < len; i++)
#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
typedef long long int ll;
typedef const int c_int;
typedef vector<int> vnt;
typedef double dbl;
c_int MOD = 1e9 + 7;
c_int Mx_row = 100;
c_int Mx_col = 100;
#define N 1000

int main(){
    int n1,m1;
    cout<<"Tell the number of rows and column : " ;cin>>n1>>m1 ;

    // allocating memory for the 2d array
    int **arr = new int*[n1];
    for(int i=0;i<n1;i++){
        arr[i] = new int[m1];
    }

    // taking input of the 2d matrix
    fr(i,n1){
        fr(j,m1){
            cout<<"Tell the element : ";
            cin>>arr[i][j];
        }
    }

    // printing the matrix
    cout<<"The matrix is given by : \n";
    fr(i,n1){
        fr(j,m1){
            cout<<arr[i][j]<<" ";
        }
        nl;
    }

    // deleting the column of the matrix first 
    fr(i,m1){
        delete[] arr[i];
    }
    // deleting the rows of the matrix later
    delete[] arr;
}