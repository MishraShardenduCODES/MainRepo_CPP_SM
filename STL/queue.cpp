#include <iostream>
#include <queue>

int main() {
    // Create a queue
    std::queue<int> myQueue;

    // Push elements to the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Print the front element of the queue
    std::cout << "Front element: " << myQueue.front() << std::endl;

    // Pop the front element from the queue
    myQueue.pop();

    // Print the size of the queue
    std::cout << "Size of queue: " << myQueue.size() << std::endl;

    // Check if the queue is empty
    if (myQueue.empty()) {
        std::cout << "Queue is empty." << std::endl;
    } else {
        std::cout << "Queue is not empty." << std::endl;
    }

    // Push more elements to the queue
    myQueue.push(40);
    myQueue.push(50);

    // Print all elements of the queue
    std::cout << "Queue elements:";
    while (!myQueue.empty()) {
        std::cout << " " << myQueue.front();
        myQueue.pop();
    }
    std::cout << std::endl;

    return 0;
}
