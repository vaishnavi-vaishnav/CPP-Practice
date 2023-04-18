#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    getline(cin, input); // Read input string with spaces

    stringstream ss(input); //extract each word from the input string
    string word;
    string output = "";

    // Reverse each word in the input string
    while (ss >> word) {
        reverse(word.begin(), word.end());    // reverses each word using the reverse() function
        output += word + " ";
    }

    // Remove extra space at the end
    output.pop_back();     //the extra space at the end is removed using the pop_back() function

    cout << output << endl;
    return 0;
}
