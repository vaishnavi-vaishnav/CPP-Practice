#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
	cin>>t;
	while(t--){
	    string s;
	    cin >> s;
	    int sum = 0,i;
	    int n;
	    for(i = 0; i < s.length(); i++)
	    { 
	        n=int(s[i]);
	        if(n>=49 && n<=57)
	        sum = sum + (n-48);
	    }
	    cout<<sum<<endl;
	}
	return 0;
    
//     int t;
//     cin >> t;
    
//     while(t--){
        
//         string s;
//         cin >> s;
        
//         int sum = 0;
//         for(char c : s){
//              if (c >= '0' && c <= '9'){
//                 sum += c - '0';
//             }
//         }
//         cout << sum;
        
//     }

// 	return 0;
}
