#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl cout<<"\n";
#define dbl double
#define N 1000

int main(){
    vector<int>v;
    vector<int>b(5);
    for(int i=0;i<5;i++){
        cout<<b[i];
    }
    vector<int>a(5,1);
    for(int i=0;i<5;i++){
        cout<<a[i];
    }
    cout<<v.size();
    nl;
    v.push_back(123);
    v.push_back(1223);
    v.push_back(1342);
    v.push_back(1642);
    v.push_back(7812);
    cout<<v.size();
    nl;
    for(int i=0;i<5;i++){
        cout<<v[i];
        nl;
    }
    nl;
    v.pop_back();
    // Output elements of vector v after popping
    // The virtual size is decreased when it is pop_back()
    for(int i=0;i<v.size();i++){
        cout << v[i];
        nl;
    }
    nl;
    cout<<v.at(2);
    nl;
    nl;
    nl;
    nl;

    // vector<int>num;
    // cout<<num.capacity();
    // nl;
    
    // num.push_back(12);
    // cout<<num.capacity();
    // nl;

    // num.push_back(21);
    // cout<<num.capacity();
    // nl;

    // num.push_back(21);
    // cout<<num.capacity();
    // nl;

    // num.push_back(21);
    // cout<<num.capacity();
    // nl;

    // num.push_back(21);
    // cout<<num.capacity();
    // nl;

    // num.push_back(21);
    // cout<<num.capacity();
    // nl;

    // num.push_back(21);
    // cout<<num.capacity();
    // nl;

    // num.push_back(21);
    // cout<<num.capacity();
    // nl;

    // num.push_back(21);
    // cout<<num.capacity();
    // nl;

    vector<int> num2(5,10);
    vector<int> pros(num2);
    for(int i=0;i<5;i++){
        cout<<pros[i]<<" ";
    }
    cout<<v.empty();
}