#include <iostream>
#include <list>
#include <string> // Include the <string> header for std::string
using namespace std;

int main() {
    char s[] = {'a','a','\0','a','a','\0'};
    string s2 = "aa\0aa\0";
    cout << s << endl << s2;
    return 0;
}
