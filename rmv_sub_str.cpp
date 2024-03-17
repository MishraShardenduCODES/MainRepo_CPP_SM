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
    cout<<"Tell the string you want to remove : ";
    getline(cin,str2);
    while(str1.length() != 0 && str1.find(str2)<str1.length()){
        str1.erase(str1.find(str2),str2.length());
    }
    cout<<str1;
    return 0;
}
