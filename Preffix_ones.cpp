// Chef has a binary string S of length N.

// Chef can perform the following operation on the string:

// Choose any substring of S;
// Remove the chosen substring from S;
// Concatenate the remaining parts of the string S, obtained after removing the substring.
// Find the length of the longest prefix having all 1s you can achieve, by performing the above operation at most once.

// Note: A prefix of a string is obtained by deleting some (possibly zero) characters from the end of string S.

// Input Format:
// The first line of input will contain a single integer T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains a single integer N, the length of the binary string.
// The next line contains the binary string S.

// Output Format:
// For each test case, print in a new line, the length of the longest prefix having all 1s you can achieve, by performing the operation at most once.


// Input:
// 3
// 4
// 1010
// 6
// 011011
// 11
// 01011011101

// Output:
// 2
// 2
// 3



#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    
    while(t>0){
        
        long long N;
        cin>>N;
        string S;
        cin>>S;
        int i,first1s = 0,sec1s;
        
        for(i=0;i<N;i++){
            if(S[i]=='1')
                first1s++;
            else
                break;
        } 
        
        int mx=0;
        int sum=0;
        
        for(int x = i; x < N; x++){
            sum = 0;
            while( S[x] == '1'){
                x++;
                sum++;
            }
            mx = max(mx,sum);
        }
        
        mx = mx + first1s;
        cout << mx << endl;
        t--;
    }
    return 0;
}

