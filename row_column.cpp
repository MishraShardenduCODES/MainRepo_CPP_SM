#include <iostream>
using namespace std;

#define fr(i, len) for(int i = 0; i < len; i++)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
typedef long long int ll;
typedef double dbl;
#define N 1000

int main(){
    int n,m;
    cout<<"Tell the no. of row and column : ";
    cin>>n>>m;
    int mat[n][m];
    int ar[n]={0};
    int ac[m]={0};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Tell the element : ";
            cin>>mat[i][j];
        }
    }
    int sm_row=0,sm_col=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
            ar[i]+=mat[i][j];
            ac[j]+=mat[i][j]; 
        }
        nl;
    }
    fr(i,n){
        cout<<"Sum of the row : "<<ar[i]<<"\n";
    }
    fr(i,m){
        cout<<"Sum of the column : "<<ac[i]<<"\n";
    }
    return 0;
}
