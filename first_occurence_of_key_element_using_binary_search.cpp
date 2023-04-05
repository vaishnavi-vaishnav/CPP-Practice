
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target) {
    
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            // target found, check if it is the first occurrence
            while (mid > 0 && arr[mid - 1] == target) {
                mid--;
            }
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    // target not found
    return -1;
}

int main() {
    // sample input
    vector<int> arr = {1, 2, 2, 2, 3, 3, 4, 5};
    int target = 2;

    int index = binarySearch(arr, target);

    if (index == -1) {
        cout << "Target not found" << endl;
    }
    else {
        cout << "First occurrence of " << target << " is at index " << index << endl;
    }

    return 0;
}


