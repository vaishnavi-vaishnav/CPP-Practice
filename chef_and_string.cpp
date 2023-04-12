// Chef has a string S consisting of lowercase English characters. 
// Chef defined functions left shift L(X) and right shift R(X) as follows.
// L(X) is defined as shifting all characters of string X one step towards 
// left and moving the first character to the end. R(X) is defined as shifting 
// all characters of string X one step towards the right and moving the last character to the beginning.

// For example, L("abcd") = "bcda" and R("abcd") = "dabc"

// Chef wants to find out whether there exists a string V of the same length as S such that both L(V)=S and R(V)=S holds.

// ###Input:

// The first line of the input contains a single integer T denoting the number of test cases. 
// The description of T test cases follows. The first line of each test case contains a string S.

// ###Output: For each test case, If there exists a valid string V, print "YES", otherwise print "NO" (without the quotes).

// Input: 
// 4
// a
// ab
// abcd
// aaaaa

// Output:
// YES
// YES
// NO
// YES

#include <bits/stdc++.h>
using namespace std;


void solve(){
    
    string s;
    cin>>s;
    
    if(s.size()==1 || s.size()==2){
        cout<<"YES"<<endl;
        return;
    }
    
    if(s.size()%2!= 0) {
        for(int i=0;i<s.size();i++){
            if(s[i] != s[0]){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
    }
    
    for(int i=0;i<s.size();i+=2){
        if(s[i] != s[0]){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=1;i<s.size();i+=2){
        if(s[i] != s[1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    
    cout<<"YES"<<endl;
}

int main() {
	
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
	return 0;
}






