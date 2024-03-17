#include <iostream>
#include <list>
#include <string> // Include the <string> header for std::string
using namespace std;


#include <iostream>
#include <string>
using namespace std;

int main() {
    char s[] = {'a','a','\0','a','a','\0'};
    string s2 = "aa\0aa\0";
    cout << s << endl << s2;

    // Character Array
    char charArray[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "Character Array: " << charArray << endl;

    // String
    string str = "World";
    cout << "String: " << str << endl;

    // Accessing characters
    cout << "First character of charArray: " << charArray[0] << endl;
    cout << "Second character of string: " << str.at(1) << endl;

    // Concatenation
    string concatStr = str + " " + "!";
    cout << "Concatenated String: " << concatStr << endl;

    return 0;
}


// Definition:
    // Character Array: It's a collection of variables of character type, represented as a sequence of characters terminated by a null character ('\0').
    // String: It's a class in C++ that represents a sequence of characters. It's instantiated to declare strings and provides various functionalities for string manipulation.

// Accessing Characters:
    // Character Array: Characters can be accessed using index values directly, like array[index].
    // String: Characters can be accessed using member functions like string_name.at(index) or through indexing, like string_name[index].

// Data Type:
    // Character Array: It's not a data type itself; it's an array of characters.
    // String: It's considered a data type because it's a class in C++, and instances of this class represent strings.

// Operators:
    // Character Array: Operators cannot be directly applied to character arrays.
    // String: Operators like +, ==, etc., can be applied to strings for concatenation, comparison, etc.

// Length and Boundaries:
    // Character Array: Has a fixed length and boundaries, but it's easy to overrun them if not handled carefully.
    // String: Doesn't have a fixed length, and its boundaries are not fixed, so it's safer to manipulate strings without worrying about overrunning boundaries.

// Memory Allocation:
    // Character Array: Stores elements in a contiguous memory location, allowing for faster access.
    // String: Internally manages memory allocation and doesn't guarantee contiguous storage, but it offers convenience and safety in string manipulation.
