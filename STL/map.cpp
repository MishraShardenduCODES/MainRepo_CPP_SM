#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl cout<<"\n";
#define dbl double
#define N 1000

int main(){
    map<int,string>m;
    m[1] = "I ";
    m[2] = "Love ";
    m[11] = "Food ";
    m[12] = "A lot ";
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<"\n";
    }
    nl;
    nl;
    m.insert({21,"Give me "});
    m.insert({22,"A lot of food "});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<"\n";
    }
    nl;
    auto it = m.find(2);
    cout << (*it).first << " " << (*it).second << "\n";
}

//similarly we can use unordered map and unordered set 
