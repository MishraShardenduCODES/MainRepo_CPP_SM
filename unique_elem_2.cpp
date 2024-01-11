#include <iostream>
#include <vector>

// Function to find the rightmost set bit in a number
unsigned int findRightmostSetBit(int num) {
    int position = 0;
    while ((num & 1) == 0) {
        position++;
        num >>= 1;
    }
    return position;
}

// Function to find two unique elements in an array
void findUniqueElements(int arr[], int size) {
    int xorResult = 0;

    // Get the XOR of all elements in the array
    for (int i = 0; i < size; ++i) {
        xorResult ^= arr[i];
    }

    // Find the rightmost set bit in the XOR result
    unsigned int rightmostSetBit = findRightmostSetBit(xorResult);

    int unique1 = 0, unique2 = 0;

    // Partition the array elements based on the rightmost set bit
    for (int i = 0; i < size; ++i) {
        if ((arr[i] >> rightmostSetBit) & 1) {
            unique1 ^= arr[i];
        } else {
            unique2 ^= arr[i];
        }
    }

    // Print the two unique elements
    std::cout << "The two unique elements are: " << unique1 << " and " << unique2 << std::endl;
}

int main() {
    int arr[] = {2, 4, 7, 9, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    findUniqueElements(arr, size);

    return 0;
}
