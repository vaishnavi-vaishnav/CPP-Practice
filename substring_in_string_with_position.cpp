/******************************************************************************

program to find a substring with in a string and if foound then find its starting position

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, substr;
    cin >> str >> substr;
    int str_len = str.length();
    int substr_len = substr.length();
    
    for (int i = 0; i <= str_len - substr_len; i++) {
        int j = 0;
        
        while (j < substr_len && str[i+j] == substr[j]) {
            j++;
        }
        if (j == substr_len) {
            cout << "Pattern found at position " << i + 1 << endl;
            return 0;
        }
    }

    cout << "Pattern not found." << endl;
    return 0;
}
