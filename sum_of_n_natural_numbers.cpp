//sum of n natural numberes c++
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
using namespace std;
int sum(int a);
int main(){
    int n,a;
    cout<<"Tell how many number you wanna add :";
    cin>>n;
    a=sum(n);
    cout<<"The sum of "<<n<<" natural numbers = "<<a;
    return 0;
}
int sum(int a){
    int sum=0;
    for(int i=0;i<=a;i++){
        sum+=i ;
    }
    return sum;
}
