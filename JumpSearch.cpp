#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/*
    Befor doing to jump search, the array must be sorted.
    Time complexity: O(sqrt(n)) where n is the number of elements.
    space complexity: O(1).
*/

int JumpSearch(vector<int>& arr, int target) {
    int k = 0, length = arr.size(), m = sqrt(length), i=0;

    // if target is less than our smallest element, greater than our greatest element
    if (target < arr[0] && target > arr[length-1]) return -1;

    // iterate through the sorted array to find the target
    while (i <= length-1) {
        if (arr[i] == target) {
            return i;
        } else if (arr[i] < target) {
            // increment the jump count by 1, and jump 'i' by m.
            k++;
            i += m;
        } else {
            // if arr[i] is greater than target.
            int low = (k-1)*m, high = min((k*m), length);
            for (int j=low; j<=high-1; j++) {
                if (arr[j] == target) return j;
            }
        }
    }

    // Handling last block
    if (i >= length) {
        int low = (k-1)*m;
        for(int i=low; i<length; i++) {
            if (arr[i] == target) return i;
        }
    }

    // if target is not found than, return -1
    return -1;
};

// main functin
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int target = 0;

    int result = JumpSearch(arr, target);

    cout << result << endl;

    return 0;
}