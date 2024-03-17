#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    cout << "Tell a string: ";
    getline(cin, str1);

    string result; // Create a new string to store the modified string

    // Iterate through the original string from end to beginning
    for (int i = str1.length() - 1; i >= 0; i--) {
        // Check if the current character is a space
        if (str1[i] == ' ') {
            // Insert "@40" before the space
            result = "@40" + result;
        } else {
            // Copy the character from the original string to the result string
            result = str1[i] + result;
        }
    }

    // Print the modified string
    cout << result << endl;

    return 0;
}
