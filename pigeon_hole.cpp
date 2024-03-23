#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 10; // Number of pigeons
    int m = 9;  // Number of pigeonholes

    if (n > m) {
        cout << "At least one pigeonhole contains more than one pigeon." << endl;
    } else {
        cout << "Each pigeonhole contains at most one pigeon." << endl;
    }

    return 0;
}
