#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl cout<<"\n";
#define dbl double
#define N 1000

int main(){
    array<int,5>arr = {1,2,3,4,5};
    cout<<"\n"<<arr.size();  // 5 as the size of array is 5 
    cout<<"\n"<<arr.front(); // 1 as it is at the start 
    cout<<"\n"<<arr.back();  // 5 as it is at the end
    cout<<"\n"<<arr.at(2);   // 3 as it is at 2 index
    cout<<"\n"<<arr.empty(); // 0 as in false as it is not empty 
}