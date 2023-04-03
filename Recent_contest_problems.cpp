// CodeChef recently revamped its practice page to make it easier for users to identify the next problems they should solve by introducing some new features:

// 1. Recent Contest Problems - Contains only problems from the last 2 contests
// 2. Separate Un-Attempted, Attempted, and All tabs
// 3. Problem Difficulty Rating - The Recommended dropdown menu has various difficulty ranges so that you can attempt the problems most suited to your experience
// 4. Popular Topics and Tags
// Chef has been participating regularly in rated contests but missed the last two contests due to his college exams. He now wants to solve them and so he visits the practice page to view these problems.

// Given a list of N contest codes, where each contest code is either START38 or LTIME108, help Chef count how many problems were featured in each of the contests.

// Input Format:
// First line will contain T, number of test cases. Then the test cases follow.
// Each test case contains of two lines of input.
// First line of input contains the total count of problems that appeared 
// in the two recent contests - N.Second line of input contains the list of
//  N contest codes. Each code is either START38 or LTIME108, to which each 
//  problem belongs.

// Output Format:
// For each test case, output two integers in a single new line - 
// the first integer should be the number of problems in START38, 
// and the second integer should be the number of problems in LTIME108.


#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int start38 = 0, ltime108 = 0;
        string contestCode;
        
        for (int i = 0; i < n; i++) {
            cin >> contestCode;
            if (contestCode == "START38")
                start38++;
            else
                ltime108++;
        }

        cout << start38 << " " << ltime108 << endl;
    }

    return 0;
    
}

