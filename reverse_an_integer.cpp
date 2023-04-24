// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x 
// causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

// Example 1:
// Input: x = 123
// Output: 321

#include <iostream>
#include <climits>
using namespace std;

 int reverse(int n) {

        int ans = 0, i = 0;
        while(n != 0){

            // accessing the last digit of n
            int digit = n % 10;  

            // PROBLEM: if reversed integer is out of range because of (ans * 10)
            if(ans < INT_MIN/10 || ans > INT_MAX/10){
                return 0;
            }
            // formula for printing digits in reverse order
            ans = (ans * 10) + digit;

            // updating n by removing the digit accessed
            n = n / 10;
        }
        return ans;
    }

int main() {
    int n;
    cin >> n;

    cout << reverse(n) << endl;

    return 0;
}    