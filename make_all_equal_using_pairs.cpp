// Chef has an array A of length N.In one operation, Chef can choose any two
//  distinct indices i, j(1<=i, j<=n, i!=j)
// and either change Ai to Aj or change Aj to Ai. Find the minimum 
// number of operations required to make all the elements of the array equal.

// Input Format:
// First line will contain T, number of test cases. Then the test cases follow.
// First line of each test case consists of an integer N - denoting the size 
// of array A.
// Second line of each test case consists of N space-separated integers 
// a1,a2,...., an - denoting the array A.

// Output Format:
// For each test case, output the minimum number of operations required 
// to make all the elements equal.


#include <iostream>
#include <climits>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        int arr[n];


        for(int i = 0; i < n; i++ ){
            cin >> arr[i];
        }
        
        int ans = INT_MAX;
        for(int i = 0; i < n; i++ ){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(arr[i] != arr[j]){
                    count++;
                }    
            }
            ans = min(ans, count);
        }
        cout << ans << endl;
    }
    
	return 0;

}


