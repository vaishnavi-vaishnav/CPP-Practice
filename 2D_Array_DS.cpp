// Given a  2D Array, :

// 1 1 1 0 0 0
// 0 1 0 0 0 0
// 1 1 1 0 0 0
// 0 0 0 0 0 0
// 0 0 0 0 0 0
// 0 0 0 0 0 0
// An hourglass in  is a subset of values with indices falling in this pattern in 's graphical representation:

// a b c
//   d
// e f g
// There are  hourglasses in . An hourglass sum is the sum of an hourglass' values. 
// Calculate the hourglass sum for every hourglass in , then print the maximum hourglass sum. 
// The array will always be .

// Example


// -9 -9 -9  1 1 1 
//  0 -9  0  4 3 2
// -9 -9 -9  1 2 3
//  0  0  8  6 6 0
//  0  0  0 -2 0 0
//  0  0  1  2 4 0
// The  hourglass sums are:

// -63, -34, -9, 12, 
// -10,   0, 28, 23, 
// -27, -11, -2, 10, 
//   9,  17, 25, 18
// The highest hourglass sum is  from the hourglass beginning at row , column :

// Note: If you have already solved the Java domain's Java 2D Array challenge, you may wish to skip this challenge.

// Function Description

// Complete the function hourglassSum in the editor below.

// hourglassSum has the following parameter(s):

// int arr[6][6]: an array of integers
// Returns

// int: the maximum hourglass sum
// Input Format

// Each of the  lines of inputs  contains  space-separated integers .

// Constraints

// Output Format

// Print the largest (maximum) hourglass sum found in .

// Sample Input

// 1 1 1 0 0 0
// 0 1 0 0 0 0
// 1 1 1 0 0 0
// 0 0 2 4 4 0
// 0 0 0 2 0 0
// 0 0 1 2 4 0
// Sample Output

// 19


#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int hourglassSum(vector<vector<int>> arr) {
    
    int maxSum = INT_MIN;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] +
                      arr[i+1][j+1] +
                      arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;

}

int main()
{
    ofstream cout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }

    int result = hourglassSum(arr);

    cout << result << "\n";

    // cout.close();

    return 0;
}


