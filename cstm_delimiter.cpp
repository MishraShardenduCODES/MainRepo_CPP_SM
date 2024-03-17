#include <iostream>
using namespace std;

int main() {
    char buffer[100]; // Buffer to store input

    cout << "Enter a sentence (end with '$'): ";
    cin.getline(buffer, 100, '$'); // Read input until '$' delimiter is encountered

    cout << "You entered: " << buffer << endl;

    return 0;
}

