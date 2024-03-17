#include <iostream>
#include <stack>

int main() {
    // Create a stack
    std::stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Print the top element of the stack
    std::cout << "Top element: " << myStack.top() << std::endl;

    // Pop the top element from the stack
    myStack.pop();

    // Print the size of the stack
    std::cout << "Size of stack: " << myStack.size() << std::endl;

    // Check if the stack is empty
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    // Push more elements onto the stack
    myStack.push(40);
    myStack.push(50);

    // Print all elements of the stack
    std::cout << "Stack elements:";
    while (!myStack.empty()) {
        std::cout << " " << myStack.top();
        myStack.pop();
    }
    std::cout << std::endl;

    return 0;
}
