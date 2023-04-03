// You are given an array A of length N. An element X is said to be dominant 
// if the frequency of X in A is strictly greater than the frequency of any 
// other element in the A.

// For example, if A=[2,1,4,4,4] then 
// 4 is a dominant element since its frequency is higher than the frequency 
// of any other element in A.

// Find if there exists any dominant element in A.

// Input Format:
// The first line of input contains a single integer T — the number of test 
// cases. Then the test cases follow.
// The first line of each test case contains an integer N — the size of the 
// array A.
// The second line of each test case contains N space-separated integers 
// a1, a2, ... , an denoting the array A.

// Output Format:
// For each test case, output YES if there exists any dominant element in A. 
// Otherwise, output NO.

// You may print each character of YES and NO in uppercase or lowercase 
// (for example, yes, yEs, Yes will be considered identical).


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        
        int n;
        cin >> n;
        int arr[n];
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        sort(arr, arr+n); // sort the array to find the dominant element
        
        int freq = 1, maxFreq = 0, dominantElement = -1;
        
        for (int i = 1; i <= n; i++) {
            if (arr[i] == arr[i - 1]) { // count frequency of current element
                freq++;
            } 
            else {
                if (freq > maxFreq) { // update maximum frequency and dominant element
                    maxFreq = freq;
                    dominantElement = arr[i-1];
                }
                freq = 1; // reset frequency for new element
            }
        }
        if (maxFreq >= n/2) { // check if dominant element's frequency is greater than n/2
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}


