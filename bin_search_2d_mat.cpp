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
    int r1, c;
    cout << "Tell the row and column : ";
    cin >> r1 >> c;
    int mat[r1][c];
    fr(i, r1){
        fr(j, c){
            cout << "Tell : ";
            cin >> mat[i][j];
        }
    }
    int flattened[r1 * c];
    int k = 0;
    fr(i, r1){
        fr(j, c){
            flattened[k++] = mat[i][j];
        }
    }
    sort(flattened, flattened + r1 * c);
    k = 0;
    fr(i, r1){
        fr(j, c){
            mat[i][j] = flattened[k++];
        }
    }
    int key;
    cout<<"Tell the element to find : ";
    cin>>key;
    int stpr=1,l = 0,r = r1*c - 1,mid;
    while(l<=r){
        mid = r + (l-r)/2;
        int elm = mat[mid/c][mid%c];
        if(key == elm){
            cout<<"Element "<<elm<<"is at the index : "<<mid/c<<" , "<<mid%c;
            stpr=0;
            break;
        }else if(key<elm){
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    if(stpr){
        cout<<key<<" is not in the array.";
    }
    nl;
    fr(i, r1){
        fr(j, c){
            cout << mat[i][j] << " ";
        }
        nl;
    }
}
