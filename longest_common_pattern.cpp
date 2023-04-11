// As we all know, Chef is cooking string for long days, his new discovery 
// on string is the longest common pattern length. The longest common pattern 
// length between two strings is the maximum number of characters that both 
// strings have in common. Characters are case sensitive, that is, lower case 
// and upper case characters are considered as different. Note that characters 
// can repeat in a string and a character might have one or more occurrence in 
// common between two strings. For example, if Chef has two strings 
// A = "Codechef" and B = "elfedcc", then the longest common pattern 
// length of A and B is 5 (common characters are c, d, e, e, f).

// Chef wants to test you with the problem described above. He will give 
// you two strings of Latin alphabets and digits, return him the longest 
// common pattern length.

// Input:
// The first line of the input contains an integer T, denoting the number 
// of test cases. Then the description of T test cases follows.
// The first line of each test case contains a string A. The next line 
// contains another character string B.

// Output:
// For each test case, output a single line containing a single 
// integer, the longest common pattern length between A and B.

// Input::
// 4
// abcd
// xyz
// abcd
// bcda
// aabc
// acaa
// Codechef
// elfedcc

// Output:
// 0
// 4
// 3
// 5


#include <iostream>
using namespace std;

int main() {
	int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        
        int freq[256] = {0}; 
        // initializing an array to store frequency of each character
        
        int common = 0;
        
        for (int i = 0; i < a.length(); i++) {
            freq[a[i]]++; 
            // increasing frequency of character in string a
        }
        for (int i = 0; i < b.length(); i++) {
            if (freq[b[i]] > 0) 
            { // if character in string b is present in string a
                common++; // incrementing common count
                freq[b[i]]--; // decrementing frequency of character in string a
            }
        }
        cout << common << endl; // outputting the common count for current test case
    }
    return 0;
}
