// Chef is a very lazy person. Whatever work is supposed to be finished in 
// x units of time, he finishes it in m∗x units of time. But there is always 
// a limit to laziness, 
// so he delays the work by at max d units of time. Given x,m,d, 
// find the maximum time taken by Chef to complete the work.

// Input Format:
// First line will contain T, number of testcases. Then the testcases follow.
// Each testcase contains a single line of input, three integers x,m,d.

// Output Format:
// For each testcase, output in a single line answer to the problem.



#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
     while(t--){
         int x, m, d;
         cin >> x >> m >> d;
         
         int chef1 = x*m;
         int chef2 = x+d;
         
         if(chef1 < chef2){
             cout << chef1 << endl;
         }
         else
             cout << chef2 << endl;
     }


	return 0;
}


