#include <iostream>
#include <vector>
using namespace std;

/*
    Time complexity: O(N) where N is the number of elements.
    Space complexity: O(1).
*/

int LinearSearch(vector<int> arr, int target) {
    for(int i=0; i<=arr.size(); i++) {
        if (arr[i] == target) return i;
    };
};

// Main function
int main() {
    vector<int> ar = {2, 3, 1, 5, 6};
    int t = 5;

    int result = LinearSearch(ar, t);
    cout << result;
    return 0;
}