#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int len;
	    cin >> len;
	    string str;
	    cin >> str;
	    
	   // if(len % 2 == 0){
	   //     cin >> len;
	   //     cin >> str;
	   // }     
	   // else
	   //     break;
	   
	   string a = str.substr(0,len/2);
	   string b = str.substr(len/2);
	   
	   //sort(a.begin(), a.end());
	   //sort(b.begin(), b.end());
	   
	   if( a == b)
	       cout <<"Yes" << endl;
	   else
	       cout << "No" << endl;
	        
	}
	
	return 0;
}
