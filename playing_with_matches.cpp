// Chef's son Chefu found some matches in the kitchen and he immediately 
// starting playing with them.

// The first thing Chefu wanted to do was to calculate the result of his 
// homework — the sum of A and B, and write it using matches. Help Chefu and tell him the number of 
// matches needed to write the result.

// Digits are formed using matches in the following way: 

// Input:
// The first line of the input contains a single integer 
// T denoting the number of test cases. The description of 
// T test cases follows.
// The first and only line of each test case contains two space-separated 
// integers A and B.

// Output:
// For each test case, print a single line containing one integer — the 
// number of matches needed to write the result (A+B).

#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    int arr[10] = {6,2,5,5,4,5,6,3,7,6};
    
    while(t--)
    {
        int a, b, sum = 0;
        cin >> a >> b;
        sum = a + b;
        int match = 0;
        
        if (sum == 0) 
            match = arr[0];
        else {
            while (sum > 0) {
                match = match + arr[sum % 10];
                sum = sum / 10;
            }
        }

        cout << match << endl;

    }

	return 0;
}


