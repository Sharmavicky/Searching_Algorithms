#include <iostream>
#include <vector>
using namespace std;

/*
    Befor doing to binary search, the array must be sorted.
    Time complexity: O(log n) where n is the number of elements.
    space complexity: O(1).
*/


int BinarySearch(vector<int> arr, int target) {
    int low = 0, high = arr.size()-1;
    while (low <= high) {
        int mid = (low+high) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return -1;
};

// Main function
int main() {
    vector<int> ar = {1, 2, 3, 4, 5};
    int target = 5;

    int result = BinarySearch(ar, target);
    cout << result;
    return 0;
}