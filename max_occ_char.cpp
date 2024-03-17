#include <bits/stdc++.h>
using namespace std;

typedef string stg;
typedef long long int ll;
#define nl cout<<"\n";
#define tas cout<<"Tell a string : ";
typedef double dbl;
const int N = 1000;

int main(){
    string str;
    tas;
    getline(cin,str);
    vector <int> a(26,0);
    int mx = INT_MIN;
    for(int i=0;i<str.length();i++){
        str[i] = tolower(str[i]);
        if(isalpha(str[i])){
            a[str[i]-'a'+0] +=1;
        }
        mx = max(mx,a[i]);
    }
    for(int i = 0; i < 26; ++i){
        mx = max(mx, a[i]);
    }
    for(int i = 0; i < 26; ++i){
        if(a[i] == mx){
            cout << "The max occurring character is : " << char('a' + i) << " it occurs " << mx << " times.";
            nl;
        }
    }
}