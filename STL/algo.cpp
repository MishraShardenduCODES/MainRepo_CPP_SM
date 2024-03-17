#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl cout<<"\n";
#define dbl double
#define N 1000

int main(){
    // vector<int>v;
    // v.push_back(43);
    // v.push_back(20);
    // v.push_back(78);
    // v.push_back(56);
    
    // auto it = find(v.begin(), v.end(), 3);
    // if (it != v.end()){
    //     cout << "Element found at position " << distance(v.begin(), it) << endl;
    // } else{
    //     cout << "Element not found" << endl;
    // }

    vector<int> v = {1, 2, 3, 4};
    
    vector<int>::iterator lower, upper;
    lower = lower_bound(v.begin(), v.end(), 3);
    upper = upper_bound(v.begin(), v.end(), 3);
 
    cout << "lower_bound for 6 at index "<< (lower - v.begin()) << '\n';
    cout << "upper_bound for 6 at index "<< (upper - v.begin()) << '\n';

    if(binary_search(v.begin(),v.end(),3)){
        cout<<"It's there in vector \n";
    }else{
        cout<<"It's not there in vector \n";
    }

    string str = "I am Shardendu Mishra";
    string str2 = str;
    reverse(str2.begin(),str2.end());

    cout<<str<<"\n";
    cout<<str2<<"\n";

    string str3 = "123456789" ;
    rotate(str3.begin(),str3.begin()+2,str3.end());
    cout<<str3<<" ";

    return 0;
}