#include <bits/stdc++.h>
using namespace std;

#define tas cout<<"Tell a string : ";
typedef long long int ll;
#define nl cout<<"\n";
typedef double dbl;
const int N = 1000;

int main(){
    string str1,str2;
    tas;
    getline(cin,str1);
    int j=0;
    for(int i=0;i<str1.length();i++){
        string wrd = "@40";
        if(str1[i] == ' '){
            str2.append(wrd);
        }else{
            str2.push_back(str1[i]);
        }
    }
    cout<<str2<<" ";
}