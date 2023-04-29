/******************************************************************************

Find first, last and number of times key value is present in an array using Binary search

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

// int countOccurrences(const vector<int>& arr, int key) {
    
//     int leftIndex = lower_bound(arr.begin(), arr.end(), key) - arr.begin();
//     int rightIndex = upper_bound(arr.begin(), arr.end(), key) - arr.begin();
    
//     return rightIndex - leftIndex;
// }

// int main() {
    
//     vector<int> arr = {1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4};
//     int key = 3;
    
//     int count = countOccurrences(arr, key);
//     cout << "The number of occurrences of " << key << " is: " << count << endl;
    
//     return 0;
// }


//  METHOD - 2 (Binary search)


vector<int> countOccurrences(const vector<int>& arr, int n,  int target) {
    // sort(arr.begin(), arr.end());
    // int n = arr.size();

    if (n == 0 || target < arr[0] || target > arr[n-1]) {
        return vector<int>{-1, -1};
    }

    int left = 0, right = n - 1;
    vector<int> result(2, -1);

    // Find the first occurrence of target
    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] < target) {
            left = mid + 1;

        } else if (arr[mid] > target) {
            right = mid - 1;

        } else {
            result[0] = mid;
            right = mid - 1;
        }
    }

    // Find the last occurrence of target
    left = 0;
    right = n - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] < target) {
            left = mid + 1;

        } else if (arr[mid] > target) {
            right = mid - 1;
            
        } else {
            result[1] = mid;
            left = mid + 1;
        }
    }

    return result;
}
   
int main() {
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    
    vector <int> arr;
    for(int i = 0; i < n; i++){
        int x;
        cout << "enter " << i + 1 << " element: ";
        cin >> x;
        arr.push_back(x);
    }
    
    int key_value;
    cout << "Enter the target element: ";
    cin >> key_value;
    
    vector<int> occurrences = countOccurrences(arr, n, key_value);
    
    if (occurrences[0] == -1) {
        cout << "Key value not found in array\n";
    } else {
        cout << "First occurrence of key value: " << occurrences[0] << endl;
        cout << "Last occurrence of key value: " << occurrences[1] << endl;
        cout << "Number of occurrences of key value: " << (occurrences[1] - occurrences[0] + 1) << endl;
    }
    
    return 0;
}