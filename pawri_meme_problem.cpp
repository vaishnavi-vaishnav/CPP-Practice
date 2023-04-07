// Lately, Chef has been inspired by the "pawri" meme. Therefore, he decided to take a string 
// S and change each of its substrings that spells "party" to "pawri". Find the resulting string.

// Input:
// The first line of the input contains a single integer T denoting the number of test cases. 
// The description of T test cases follows.
// The first and only line of each test case contains a single string S.

// Output:
// For each test case, print a single line containing the string after it is modified by Chef.

// Input: 
// 3
// part
// partypartiparty
// yemaihuyemericarhaiauryahapartyhorahihai

// Output: 
// part
// pawripartipawri
// yemaihuyemericarhaiauryahapawrihorahihai


#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	 while(t--){
	     
	     string str;
	     cin >> str;

	     for(int i = 0; i < str.size(); i++){
	         if(str[i] == 'p' && str[i + 1] == 'a' && str[i + 2] == 'r' && str[i + 3] == 't' && str[i + 4] == 'y' ){
	             str[i + 2] = 'w';
	             str[i + 3] = 'r';
	             str[i + 4] = 'i';
	             
	         }
	     }
	     cout << str << endl;
	     
	 }
	
	return 0;
}



