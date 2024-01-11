#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<limits.h>
#include<cstdlib>
#include<cctype>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,str;
    cout<<"Tell a string : ";
    getline(cin,str);
    cout<<str<<endl;
 
    s1="Fam";
    s2="ily";
    s3=s1+s2;
    s4=s1.append(s2);

    cout<<s3<<endl;
    cout<<s1+s2<<endl;
    s3.clear();
    cout<<s3<<endl;

    s5="abc";
    s6="xyz";
    int a;
    a = s5.compare(s6);
    cout<<a<<endl;

    s7="Nincompoop";
    s7.erase(3,3);
    cout<<s7<<endl;

    s8="Nincompoop";
    cout<<s8.find("com")<<endl;

    s8.insert(0,"I am not ");
    cout<<s8<<endl;

    cout<<s8.size()<<endl;
    cout<<s8.length()<<endl;

    s9=s8.substr(6,4);
    cout<<s9<<endl;

    s10 = "890";
    int b=stoi(s10);
    cout<<b+10<<endl;

    int c = 890;
    s11 = to_string(c);
    cout<<s11+"10"<<endl;

    s12="qwertyuiopasdfghjklzxcvbnm";
    sort(s12.begin(),s12.end());
    cout<<s12<<endl;

    //to upper
    cout<<"Tell a string : ";
    getline(cin,s13);
    for(int i=0;s13[i]!='\0';i++){
        if(s13[i]>='a' && s13[i]<='z'){
            s13[i] -= 32;
        }
    }
    cout<<s13<<endl;

    for(int i=0;s13[i]!='\0';i++){
        if(s13[i]>='A' && s13[i]<='Z'){
            s13[i] += 32;
        }
    }
    cout<<s13<<endl;
    
    transform(s13.begin(),s13.end(),s13.begin(),::toupper);
    cout<<s13<<endl;

    transform(s13.begin(),s13.end(),s13.begin(),::tolower);
    cout<<s13<<endl;
    return 0;
}