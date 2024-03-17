#include <iostream>
using namespace std;

void insertSubstringBeforeSpaces(string& str) {
    // Calculate the new length of the string after inserting "@40" before spaces
    int newLength = str.length();
    for (char c : str) {
        if (c == ' ') {
            newLength += 3; // Increase the length by 3 for inserting "@40"
        }
    }

    // Resize the string to accommodate the extra characters
    str.resize(newLength);

    // Iterate through the original string from end to beginning
    for (int i = str.length() - 1, j = newLength - 1; i >= 0; i--, j--) {
        // If the current character is a space, insert "@40" before it
        if (str[i] == ' ') {
            str[j] = '0'; j--;
            str[j] = '4'; j--;
            str[j] = '@'; j--;
        } else {
            // Copy the character from the original position to the new position
            str[j] = str[i];
        }
    }
}

int main() {
    string str1;
    cout << "Tell a string: ";
    getline(cin, str1);

    // Call the function to insert "@40" before spaces in the string
    insertSubstringBeforeSpaces(str1);

    // Print the modified string
    cout << str1 << endl;

    return 0;
}
