// Given an array A of N elements. Find the majority element in the array. 
// A majority element in an array A of size N is an element that appears more than N/2 times in the array.
 

// Example 1:

// Input:
// N = 3 
// A[] = {1,2,3} 
// Output:
// -1
// Explanation:
// Since, each element in 
// {1,2,3} appears only once so there 
// is no majority element.
// Example 2:

// Input:
// N = 5 
// A[] = {3,1,3,3,2} 
// Output:
// 3
// Explanation:
// Since, 3 is present more
// than N/2 times, so it is 
// the majority element.


#include<bits/stdc++.h>
using namespace std;


class Solution{
  public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int dominantElement(int arr[], int size)
    {
        
         int count = 0;
    int candidate = -1;
    for (int i = 0; i < size; i++) {
        if (count == 0) {
            candidate = arr[i];
        }
        if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }
    if (count > size/2) {
        return candidate;
    } else {
        return -1;
    }
        
    }
};

int main()
{
    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];

        }

        Solution obj;
        cout << obj.dominantElement(arr, n) << endl;

    }

    return 0;

}
