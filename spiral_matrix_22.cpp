#include<bits/stdc++.h>
using namespace std;

#define fr(i, len) for(int i = 0; i < len; i++)
#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
typedef long long int ll;
typedef double dbl;
typedef const int c_int;
c_int Mx_row = 100;
c_int Mx_col = 100;
#define N 1000

int main(){
    int r,c;
    cout<<"Tell the row and column : ";
    cin>>r>>c;
    int mat[r][c];
    fr(i,r){
        fr(j,c){
            cout<<"Tell : ";
            cin>>mat[i][j];
        }
    }
    fr(i,r){
        fr(j,c){
            cout<<mat[i][j]<<" ";
        }
        nl;
    }
    int cnt = 0;
    int ttl = r*c; 
    int strt_row = 0;
    int strt_clm = 0;
    int end_row = r-1;
    int end_clm = c-1;
    cout<<"The spiral matrix is given by : ";     
    while(cnt<ttl){
        for(int j=strt_clm; j<=end_clm && cnt<ttl; j++){
            cout<<mat[strt_row][j]<<" ";
            cnt+=1;
        }
        strt_row+=1;
        for(int i=strt_row; i<=end_row && cnt<ttl; i++){
            cout<<mat[i][end_clm]<<" ";
            cnt+=1;
        }
        end_clm-=1;
        for(int j=end_clm; j>=strt_clm && cnt<ttl; j--){
            cout<<mat[end_row][j]<<" ";
            cnt+=1;
        }
        end_row-=1;
        for(int i=end_row; i>=strt_row && cnt<ttl; i--){
            cout<<mat[i][strt_clm]<<" ";
            cnt+=1;
        }
        strt_clm+=1;
    }
}
