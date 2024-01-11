#include <iostream>

const int INT_SIZE = 8 * sizeof(unsigned int);

int getSingle(int arr[], int n) {
    int result = 0;

    // Iterate through each bit
    for (int i = 0; i < INT_SIZE; ++i) {
        int count = 0;
        int bit = (1 << i);

        // Count the number of elements with the particular bit set at position i
        for (int j = 0; j < n; ++j) {
            if (arr[j] & bit) {
                count++;
            }
        }

        // If the count is not a multiple of 3, set the bit in the result
        if (count % 3 != 0) {
            result |= bit;
        }
    }

    return result;
}

int main() {
    int arr[] = {3, 3, 2, 3, 2, 2, 1, 1, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int uniqueElement = getSingle(arr, n);

    std::cout << "The unique element in the array is: " << uniqueElement << std::endl;

    return 0;
}
