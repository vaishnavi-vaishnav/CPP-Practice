#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c=0;
        sort(s.begin(), s.end());
        for(int i=0; i<n-1; i++){
            if(s[i] == s[i+1]){
                c=1;
                break;
            }
        }
        if(c==1){
        cout<<n-2<<endl;}
        else cout<<"-1"<<endl;
    }
	
	return 0;
}