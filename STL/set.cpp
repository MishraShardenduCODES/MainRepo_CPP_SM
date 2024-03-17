#include <iostream>
#include <set>
using namespace std;

int main() {
    // Create a set
    set<int> mySet;

    // Insert elements into the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(40);
    mySet.insert(50);

    // Erase elements from the set
    mySet.erase(30);

    // Find elements in the set
    auto it = mySet.find(20);
    if (it != mySet.end()) {
        cout << "Element 20 found in the set." << endl;
    }

    // Count elements in the set
    int count = mySet.count(40);
    cout << "Number of occurrences of 40: " << count << endl;

    // Print the size of the set
    cout << "Size of the set: " << mySet.size() << endl;

    // Check if the set is empty
    if (mySet.empty()) {
        cout << "Set is empty." << endl;
    } else {
        cout << "Set is not empty." << endl;
    }

    // Clear the set
    mySet.clear();

    // Check if the set is empty after clearing
    if (mySet.empty()) {
        cout << "Set is empty after clearing." << endl;
    }

    return 0;
}
