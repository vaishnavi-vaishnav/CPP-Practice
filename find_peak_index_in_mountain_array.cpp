// Peak Index in a Mountain Array
// An array arr a mountain if the following properties hold:

// arr.length >= 3
// There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
// arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
// Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

// You must solve it in O(log(arr.length)) time complexity.

// Example 1:

// Input: arr = [0,1,0]
// Output: 1

#include <bits/stdc++.h>
using namespace std;

    int peakIndexInMountainArray(vector<int>& arr) {

        int n = arr.size();
        int left = 0, right = arr.size() - 1;

        while( left < right)
        {
            int mid = left + (right - left) / 2;

            if(arr[mid] < arr[mid + 1]){
                left = mid + 1;
            }
            else{
                right = mid;
            }
        }
        return left;
        
    }


int main(){

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements in the mountain form: ";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int peak = peakIndexInMountainArray(arr);
    cout << peak << "\n";

    return 0;
    

}