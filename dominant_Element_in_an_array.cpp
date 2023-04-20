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
    int dominantElement(int nums[])
    {
        
         int low = nums[0];
        int high = nums[0];
        do {
            low = nums[low];
            high = nums[nums[high]];
        } while (low != high);
        
        int ptr1 = nums[0];
        int ptr2 = low;
        while (ptr1 != ptr2) {
            ptr1 = nums[ptr1];
            ptr2 = nums[ptr2];
        }
        cout << ptr1;

        return 0 ;
        
    }
};

int main()
{
    
        int n;
        cin >> n;

        int nums[n];

        for(int i = 0; i < n; i++){
            cin >> nums[i];

        }

        Solution obj;
        cout << obj.dominantElement(nums) << endl;

    

    return 0;

}
