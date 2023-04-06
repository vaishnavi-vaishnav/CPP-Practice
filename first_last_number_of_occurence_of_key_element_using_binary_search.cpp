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


int countOccurrences(int arr[], int n, int key) {
    
    int left = 0, right = n-1;
    int first, last;

    // Find first occurrence of key
    while(left <= right) {
        
        int mid = (left + right)/2;
        
        if(arr[mid] == key) 
        {
            if(mid == 0 || arr[mid-1] != key) {
                first = mid;
                break;
            }
            else {
                right = mid-1;
            }
        }
        else if(arr[mid] > key) {
            right = mid-1;
        }
        else {
            left = mid+1;
        }
    }

    // Key not found
    if(left > right) {
        return 0;
    }

    // Find last occurrence of key
    left = first, right = n-1;
    
    while(left <= right) 
    {
        int mid = (left + right)/2;
        
        if(arr[mid] == key) 
        {
            if(mid == n-1 || arr[mid+1] != key) {
                last = mid;
                break;
            }
            else {
                left = mid+1;
            }
        }
        else if(arr[mid] > key) {
            right = mid-1;
        }
        else {
            left = mid+1;
        }
    }

    // Return number of occurrences
    return last - first + 1;
}

int main() {
    
    int arr[] = {2, 8, 8, 8, 8, 10, 12, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int key = 8;
    
    int count = countOccurrences(arr, n, key);
    
    cout << "Number of occurrences of " << key << " in the array: " << count << endl;
    
    return 0;
}

