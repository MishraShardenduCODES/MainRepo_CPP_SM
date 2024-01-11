#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
#include<vector>
#include<math.h>
using namespace std;

int cnv_dec_hexdec(){
    int a;
    cout << "Tell a decimal number: ";
    cin >> a;
    int b, i = 0;
    char str[1000];
    while (a > 0) {
        b = a % 16;
        if (b < 10) {
            str[i] = '0' + b;  // Use '0' to '9' for digits 0-9
        } else {
            str[i] = 'A' + (b - 10);  // Use 'A' to 'F' for digits 10-15
        }
        a /= 16;
        i++;
    }
    i--;
    while (i >= 0) {
        cout << str[i];
        i--;
    }
    cout<<endl;
}

int cnv_hexdec_dec(){
    string str;
    cout<<"Tell a hexadecimal : ";
    cin>>str;
    int len = str.size(),decimal=0;
    for(int i=0;i<len;i++){
        char c = toupper(str[i]);
        int digit;
        if(isdigit(c)){
            digit = c - '0';
        }else{
            digit = toupper(c) - 'A' + 10;
        }
        decimal += digit*pow(16,len-i-1); 
    }
    cout<<decimal<<endl;
}
int main() {
    cnv_dec_hexdec();
    cnv_hexdec_dec();
    return 0;
}
