// Lapindrome is defined as a string which when split in the middle, gives 
// two halves having the same characters and same frequency of each character. 
// If there are odd number of characters in the string, we ignore the middle 
// character and check for lapindrome. For example gaga is a lapindrome, since 
// the two halves ga and ga have the same characters with same frequency. Also, 
// abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab 
// is NOT a lapindrome. The two halves contain the same characters but their 
// frequencies do not match.
// Your task is simple. Given a string, you need to tell if it is a lapindrome.

// Input:
// First line of input contains a single integer T, the number of test cases.
// Each test is a single line containing a string S composed of only lowercase 
// English alphabet.

// Output:
// For each test case, output on a separate line: "YES" if the string is a 
// lapindrome and "NO" if it is not.



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	while (t--){
	    
	    string str;
	    cin >> str;
	    int len = str.length();
	    
	    if(len%2 == 0) //even strings
	    {
	        string s1 = str.substr(0,len/2);
	        string s2 = str.substr(len/2, len);
	        
	        sort(s1.begin(), s1.end());
	        sort(s2.begin(), s2.end());
	        
	        if(s1 == s2)
	            cout << "YES" << endl;
	        else
	            cout << "NO" << endl;
	    } 
	    else if(len%2 != 0) // odd strings
	    {
	        string o1 = str.substr(0,len/2);
	        string o2 = str.substr((len/2)+1, len);
	        
	        sort(o1.begin(), o1.end());
	        sort(o2.begin(), o2.end());
	        
	        if(o1 == o2)
	            cout << "YES" << endl;
	        else
	            cout << "NO" << endl;
	    }

	}
	
	return 0;
}

