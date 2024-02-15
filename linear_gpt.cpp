#include <iostream>

int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;  // Return the index of the target if found
        }
    }
    return -1;  // Return -1 if the target is not found in the array
}

int main() {
    int arr[] = {3, 7, 1, 9, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int target = 3;
    int result = linear_search(arr, size, target);
    if (result != -1) {
        std::cout << "Target element " << target << " found at index " << result << "." << std::endl;
    } else {
        std::cout << "Target element " << target << " not found in the array." << std::endl;
    }
    return 0;
}

