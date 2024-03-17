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

void mke_arr(int arr[],int len){
    cout<<"Tell all the elements : ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
}
void prnt_arr(int arr[],int len){
    cout<<"The elements of the array are : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
void mke_vec(vector<int>&vec,int len) {
    cout << "Tell all the elements : ";
    vec.resize(len);
    for (int i = 0; i < len; i++) {
        cin >>vec[i];
    }
}
void prnt_vec(vector<int>&vec) {
    cout << "The elements of the vector are : ";
    int len = vec.size();
    for (int i = 0;i<len;i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}
int main(){
    int r,c;
    cout<<"Tell the length and bredth of mat : ";
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
    cout<<"Wave pattern : \n";
    for(int j=0;j<c;j++){
        if(j&1){
            frb(i,r){
                cout<<mat[i][j]<<" ";
            }
        }else{
            fr(i,r){
                cout<<mat[i][j]<<" ";
            }
        }
    }
}