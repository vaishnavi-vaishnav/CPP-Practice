// A string is said to be using strong language if it contains at least K consecutive characters '*'.

// You are given a string S with length N. Determine whether it uses strong language or not.

// Input:
// The first line of the input contains a single integer T denoting the number of test cases. 
// The description of T test cases follows.
// The first line of each test case contains two space-separated integers N and K.
// The second line contains a single string S with length N.

// Output:
// Print a single line containing the string "YES" if the string contains strong language or
//  "NO" if it does not (without quotes).

// You may print each character of each string in uppercase or lowercase (for example, 
// the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

// Input:
// 3
// 5 2
// *a*b*
// 5 2
// *a**b
// 5 1
// abcde

// Output:
// NO
// YES
// NO

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0;
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == '*') {
                cnt++;
                if (cnt == k) {
                    found = true;
                    break;
                }
            } else {
                cnt = 0;
            }
        }
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

