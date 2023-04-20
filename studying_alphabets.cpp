// Not everyone probably knows that Chef has younger brother Jeff. Currently Jeff learns to read.

// He knows some subset of the letter of Latin alphabet. In order to help Jeff to study, 
// Chef gave him a book with the text consisting of N words. Jeff can read a word iff it consists only of the letters he knows.

// Now Chef is curious about which words his brother will be able to read, and which are not. Please help him!

// Input:
// The first line of the input contains a lowercase Latin letter string S, 
// consisting of the letters Jeff can read. Every letter will appear in S no more than once.

// The second line of the input contains an integer N denoting the number of words in the book.

// Each of the following N lines contains a single lowecase Latin letter string Wi, denoting the ith word in the book.

// Output:
// For each of the words, output "Yes" (without quotes) in case Jeff can read it, and "No" (without quotes) otherwise.


// Input: 
// act
// 2
// cat
// dog

// Output:
// Yes
// No


#include <bits/stdc++.h>

using namespace std;

int main() {
    string jeffLetters;
    cin >> jeffLetters;
    
    unordered_set<char> jeffSet;
    for (char c : jeffLetters) {
        jeffSet.insert(c);
    }
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        
        bool canRead = true;
        for (char c : word) {
            if (jeffSet.count(c) == 0) {
                canRead = false;
                break;
            }
        }
        
        if (canRead) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    
    return 0;
}





