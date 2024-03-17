#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define nl cout<<"\n";
typedef double dbl;
const int N = 1000;

string rvrs(string str){
    for (auto i = 0; i < str.size() / 2; i++) {
        char s = str[i];
        str[i] = str[str.size() - i - 1];
        str[str.size() - i - 1] = s;
    }
    return str;
}

int main(){
    string str1,str2,wrd;
    cout<<"Tell the string : ";
    getline(cin, str1);

    for(int i=0;i<str1.length();i++){
        wrd.push_back(str1[i]) ;
        if(str1[i] == ' ' || str1[i] == '\0'){
            wrd = rvrs(wrd);
            str2.append(wrd);
            wrd.clear();
        }
    }
    cout<<str2;
}