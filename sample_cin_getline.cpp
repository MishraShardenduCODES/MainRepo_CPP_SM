#include <iostream>
using namespace std;

int main() {
    char buffer[100]; // Buffer to store input

    cout << "Enter your name: ";
    cin.getline(buffer, 100); // Read input from cin and store it in buffer

    cout << "Hello, " << buffer << "!" << endl;

    return 0;
}
