#include <iostream>
using namespace std;

int main() {
    int a;
    long int b;
    char c;
    float d;
    double e;

    // Reading inputs for 'a' and 'b'
    cin >> a;
    cin.ignore(); // Clearing the newline character after 'a'
    cin >> b;
    cin.ignore(); // Clearing the newline character after 'b'

    // Reading inputs for 'c', 'd', and 'e'
    cin >> c;
    cin >> d;
    cin >> e;

    // Printing all inputs
    cout << a << endl << b << endl << c << endl << d << endl << e;

    return 0;
}
