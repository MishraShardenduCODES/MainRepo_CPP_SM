#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str); // Read a line of text from cin and store it in str
    cout << "You entered: " << str << endl;
    return 0;
}
