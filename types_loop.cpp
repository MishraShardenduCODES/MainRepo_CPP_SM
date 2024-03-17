#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Traditional for loop
    cout << "Traditional for loop:\n";
    int s = 5;
    for(int i = 0; i < s; i++) {
        cout << i << " ";
    }
    cout << "\n";

    // Range-based for loop
    cout << "Range-based for loop:\n";
    vector<int> a = {1, 2, 3, 4, 5};
    for(int i : a) {
        cout << i << " ";
    }
    cout << "\n";

    // For-each loop
    cout << "For-each loop:\n";
    vector<int> elements = {1, 2, 3, 4, 5};
    for(auto& element : elements) {
        cout << element << " ";
    }
    cout << "\n";

    // For loop with iterators
    cout << "For loop with iterators:\n";
    vector<int> container = {1, 2, 3, 4, 5};
    for(auto it = container.begin(); it != container.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}
