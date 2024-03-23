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
    int n1 ;
    cout<<"Tell the no. of rows : "; cin>>n1;

    // making an array for length of respective rows
    int *col = new int [n1];
    fr(i,n1){
        cout<<"Tell the length of the "<<i<<" row : "; cin>>col[i];
    }
   
    // allocating memory for a jaggered array 
    int** arr = new int*[n1];
    fr(i,n1){
        arr[i] = new int[col[i]]; 
    }

    // taking input of jaggered array
    fr(i,n1){
        fr(j,col[i]){
            cout<<"Tell the element : ";
            cin>>arr[i][j];
        }
    }

    // printing the jaggered matrix
    cout<<"The matrix is given by : \n";
    fr(i,n1){
        fr(j,col[i]){
            cout<<arr[i][j]<<" ";
        }
        nl;
    }
    
    // deleting the array with the lengths 
    delete [] col;

    // deleting the matrix 
    fr(i,n1) delete [] arr[i];
    delete [] arr;

    return 0;
}