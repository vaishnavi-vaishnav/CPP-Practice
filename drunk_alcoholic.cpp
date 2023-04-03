// Faizal is very sad after finding out that he is responsible for 
// Sardar's death. He tries to drown his sorrows in alcohol and gets very drunk. Now he wants to return home but is unable to walk straight. For every 
// 3 steps forward, he ends up walking one step backward.

// Formally, in the 1st second he moves 3 steps forward, in the 2nd 
// he moves 1 step backward and so on. 1step backwards, and so on.
// How far from his initial position will Faizal be after k seconds have 
// passed? Assume that Faizal's initial position is 0.

// Input Format:
// The first line of input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains a single integer k, the number of seconds after which Faizal's position is to be calculated.

// Output Format:
// For each test case, output a single line containing one integer - 
// Faizal's position after k seconds.



#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        
        int n;
        cin >> n;

        int position = 0;
        
        for (int i = 1; i <= n; i++) 
        {
            if (i % 2 == 1) 
            {  // odd seconds, move forward
                position += 3;
            } else 
            {  // even seconds, move backward
                position -= 1;
            }
        }

        cout << position << endl;
    }

    return 0;

}

