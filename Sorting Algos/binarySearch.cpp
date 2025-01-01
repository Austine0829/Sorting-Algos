#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0; 
    int right = arr.size() - 1;

    // mid = 0;

    while (left <= right) { // std::vector<int> arr = {3, 7, 10, 12, 40}, target = 40;
        int mid = left + (right - left) / 2;

        cout << mid << " ";

        if (arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            left = mid + 1;             
        else
            right = mid - 1;
    }

    return -1;
}

// Function to print the result of the search
void printResult(int index, int target) {
    if (index != -1) {
        std::cout << "Element " << target << " found at index " << index << ".\n";
    } else {
        std::cout << "Element " << target << " not found in the array.\n";
    }
}

int main() {
    std::vector<int> arr = {40, 10, 3, 12, 7};
    int target = -100;

    std::sort(arr.begin(), arr.end());

    int result = binarySearch(arr, target);

    printResult(result, target);

    return 0;
}
