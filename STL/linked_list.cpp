#include <iostream>
#include <list>

int main() {
    // Create a list
    std::list<int> myList;

    // Push elements to the back of the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Push elements to the front of the list
    myList.push_front(5);
    myList.push_front(15);

    // Iterate through the list and print its elements
    std::cout << "List elements:";
    for (const auto& elem : myList) {
        std::cout << " " << elem;
    }
    std::cout << std::endl;

    // Access the front and back elements
    std::cout << "Front element: " << myList.front() << std::endl;
    std::cout << "Back element: " << myList.back() << std::endl;

    // Insert an element at a specific position
    std::list<int>::iterator it = ++myList.begin(); // Iterator pointing to the second element
    myList.insert(it, 25);

    // Remove an element at a specific position
    it = --myList.end(); // Iterator pointing to the last element
    myList.erase(it);

    // Remove all elements with a specific value
    myList.remove(20);

    // Print the list after modifications
    std::cout << "Modified list:";
    for (const auto& elem : myList) {
        std::cout << " " << elem;
    }
    std::cout << std::endl;

    // Check if the list is empty
    if (myList.empty()) {
        std::cout << "List is empty." << std::endl;
    } else {
        std::cout << "List is not empty." << std::endl;
    }

    // Get the size of the list
    std::cout << "Size of list: " << myList.size() << std::endl;

    // Reverse the list
    myList.reverse();

    // Print the reversed list
    std::cout << "Reversed list:";
    for (const auto& elem : myList) {
        std::cout << " " << elem;
    }
    std::cout << std::endl;

    // Clear the list
    myList.clear();

    // Check if the list is empty after clearing
    if (myList.empty()) {
        std::cout << "List is empty after clearing." << std::endl;
    }

    return 0;
}
