#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,i,n,t;
	cin>>t;
	while(t--)
	{
	  int flag=0;
	  cin>>n;
	  string s;
	  cin>>s;
	  for(i=0;i<n;i++)
	  {
	      if(s[i]=='0' || s[i]=='5')
	      {
	          flag=1;
	          break;
	      }
	  }
	  if(flag)
	  {
	      cout<<"Yes"<<endl;
	  }
	  else
	  {
	      cout<<"No"<<endl;
	  }
	}
	return 0;
}