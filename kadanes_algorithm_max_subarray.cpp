#include <bits/stdc++.h>
using namespace std;


// Mtethod -1 Brute Force Technique (Using teo nested loops) - O(n^2)
int bruteForce( int arr[], int n ){

    int maxtillnow = 0;

    for(int i = 0; i <= n - 1; i++){
        int curr = 0;

        for(int j = i; j <= n - 1; j++){
            curr = curr + arr[j];

            if(curr > maxtillnow){
                maxtillnow = curr;

            }
        }
    }
    return maxtillnow;
}


// Method -2 Kadanes Algorithm (Using 1 for loop ) - O(n)
int kadanesAlgo(int arr[], int n){

    int curr = 0, maxtillnow = 0, start = 0, end = 0, s = 0;

    for( int i = 0; i < n; i++){

        curr = curr + arr[i];

        if(curr > maxtillnow){
            maxtillnow = curr;
            start = s;
            end = i;
        }
        if(curr < 0){
            curr = 0;
            s = i + 1;
        }
    }
     cout << "Starting index " << start << endl
         << "Ending index " << end << endl;

    return maxtillnow;

}

// Driver code
int main(){

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result1 = kadanesAlgo(arr, n);
    int result2 = bruteForce(arr, n);

    cout <<"Using Kadane's algo: " << result1 << endl;
    cout <<"Using Brute Force:  " << result2 << endl;

    return 0;
}