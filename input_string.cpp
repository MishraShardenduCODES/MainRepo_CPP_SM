#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<limits.h>
#include<cstdlib>
#include<cctype>
#include<vector>
#include<cmath>

using namespace std;

int main() {
    char str[1000];
    cout << "Enter a string: ";
    cin.getline(str, 1000); // Read a line into str
    int len1 = strlen(str);
    cout<<len1<<endl;
    int len = 0;
    for (len = 0; str[len] != '\0'; len++) {
        // Count the characters until the null terminator is encountered
    }

    cout << "Length of the string is: " << len << endl;
    return 0;
}