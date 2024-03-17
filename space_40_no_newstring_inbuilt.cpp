#include <bits/stdc++.h>
using namespace std;

#define tas cout<<"Tell a string : ";
typedef long long int ll;
#define nl cout<<"\n";
typedef double dbl;
const int N = 1000;

int main(){
    string str1;
    tas;
    getline(cin,str1);
    // inserting characters inside a string while 
    // iterating through it can lead to unexpected 
    // behavior because inserting characters 
    // shifts the positions of subsequent characters.
    
    for(int i = str1.length() - 1; i >= 0; i--){
        string wrd = "@40";
        if(str1[i] == ' '){
            str1.insert(i,wrd);
        }
    }
    cout<<str1<<" ";    
}