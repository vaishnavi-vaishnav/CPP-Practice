#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        int n, original, remainder, reversed = 0;
        cin >> n;
        
        original = n;

        // reversed integer is stored in reversedN
    
        while (n != 0) {
            remainder = n % 10;
            reversed = reversed * 10 + remainder;
            n /= 10;
        }

        // palindrome if orignal and reversed are equal
    
        if (original == reversed)
            cout << "\nwins";
        else
            cout << "\nloses";

        
    }
     return 0;

}

