// Chef considers a string consisting of lowercase English alphabets beautiful if all the characters of 
// the string are vowels.

// Chef has a string S consisting of lowercase English alphabets, of length N. He wants to convert S into 
// a beautiful string T. In order to do so, Chef does the following operation on every character of the string:

// If the character is a consonant, change the character to its closest vowel.
// If the character is a vowel, don't change it.
// Chef realizes that the final string T is not unique. Chef wonders, what is the total number of distinct 
// beautiful stringsT that can be obtained by performing the given operations on the string S.

// Since the answer can be huge, print it modulo 10^9+7.

// Note:

// There are 26 characters in the English alphabet. Five of these characters are 
// vowels: a, e, i, o, and u. The remaining 21characters are consonants.
// The closest vowel to a consonant is the vowel that is least distant from that 
// consonant. For example, the distance between the characters d and e is 1 while 
// the distance between the characters d and a is 3.
// The distance between the characters z and a is 25 and not 1.

// Input Format:
// The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
// The first line of each test case contains an integer N, denoting the length of the string S.
// The second line of each test case contains a string S consisting of lowercase English alphabets.

// Output Format:
// For each test case, output the total number of distinct beautiful strings T that can be obtained by performing the given operations on the string S, modulo 10^9+7.

// Input:
// 4
// 5
// aeiou
// 5
// abcde
// 8
// starters
// 8
// codechef

// Output:
// 1
// 2
// 4
// 4


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MOD = 1e9 + 7;

void ClosestVowels(){
      ll n;
       cin>>n;
        string s;
       cin>>s;
        ll z=1;
       ll f=pow(10,9)+7;
        for(ll i{0};i<n;i++)
       {
           if(s[i]=='c'||s[i]=='g'||s[i]=='l'||s[i]=='r')
           z=(z*2)%f;
       }
        cout<<z<<endl;
}
int main(){
    ll t;
    cin>>t;
    while (t-->0){
        ClosestVowels();
    }
}





