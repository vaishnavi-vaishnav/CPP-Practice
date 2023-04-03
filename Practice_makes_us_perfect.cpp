
// Most programmers will tell you that one of the ways to improve your performance in competitive 
// programming is to practice a lot of problems.

// Our Chef took the above advice very seriously and decided to set a target for himself.

// Chef decides to solve at least 10 problems every week for 4 weeks.
// Given the number of problems he actually solved in each week over 4 weeks as p1, p2, p3, p4 output 
// the number of weeks in which Chef met his target.

// Input Format:
// There is a single line of input, with 4
// ​These are the number of problems solved by Chef in each of the 4 weeks.

// Output Format:
// Output a single integer in a single line - the number of weeks in which Chef solved at least 
// 10 problems.
 
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,d;
	int count=0;
	cout << "Enter the value of a, b, c, d:";
	cin >>a>>b>>c>>d;
	
	if(a>=10)
	    count++;
	if(b>=10)
        count++;
    if(c>=10)
        count++;
    if(d>=10)
        count++;
    
    cout<<count;    
	    
	return 0;
}

