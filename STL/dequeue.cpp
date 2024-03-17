#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl cout<<"\n";
#define dbl double
#define N 1000

int main() {
    // Create a deque
    deque<int> myDeque;

    // Push elements to the front and back of the deque
    myDeque.push_back(10);
    myDeque.push_front(5);
    myDeque.push_back(20);
    myDeque.push_front(2);

    // Print the elements of the deque
    cout << "Deque elements:";
    for (const auto& elem : myDeque) {
        cout << " " << elem;
    }
    cout << endl;

    // Access elements at specific positions
    cout << "Element at index 2: " << myDeque[2] << endl;
    cout << "First element: " << myDeque.front() << endl;
    cout << "Last element: " << myDeque.back() << endl;

    // Remove elements from the front and back of the deque
    myDeque.pop_front();
    myDeque.pop_back();

    // Print the size of the deque
    cout << "Size of deque: " << myDeque.size() << endl;

    // Check if the deque is empty
    if (myDeque.empty()) {
        cout << "Deque is empty." << endl;
    } else {
        cout << "Deque is not empty." << endl;
    }

    // Clear the deque
    myDeque.clear();

    // Check if the deque is empty after clearing
    if (myDeque.empty()) {
        cout << "Deque is empty after clearing." << endl;
    }

    return 0;
}
