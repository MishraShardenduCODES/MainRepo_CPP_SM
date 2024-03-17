#include <bits/stdc++.h>
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
    int r, c;
    cout << "Tell the row and column : ";
    cin >> r >> c;
    int mat[r][c];
    fr(i, r){
        fr(j, c){
            cout << "Tell : ";
            cin >> mat[i][j];
        }
    }
    int key;
    cout<<"Tell the element to find : ";
    cin>>key;
    int i = r-1,stpr=1;
    int j = 0;
    while(i >= 0 && j < c){
        int elm = mat[i][j] ;
        if(elm == key){
            cout<<"The element is found at ("<<i<<" , "<<j<<") index ";
            stpr=0;
            break;
        }else if(elm<key){
            j+=1;
        }else{
            i-=1;
        }
    }
    if(stpr){
        cout<<"The element is not in matrix : \n";
    }
    fr(i, r){
        fr(j, c){
            cout<<mat[i][j]<<" ";
        }
        nl;
    }
}