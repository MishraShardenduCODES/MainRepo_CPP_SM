#include<bits/stdc++.h>
using namespace std;

#define nl cout<<"\n";
#define N 1000

int main(){
    float num;
    cout<< "Enter a number: ";
    cin >> num;
    float l=0,r=num,m,p;
    while(fabs(p-num)>0.000001){
        m=l+(r-l)/2;
        p=pow(m,2);
        if(p>num){
            r=m;
        }else{
            l=m;
        }
    }
    cout<<"The value of root is : "<<m;
    return 0;
}