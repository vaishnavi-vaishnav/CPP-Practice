#include <bits/stdc++.h>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    vector<int> ans(n);
    
    // Copy the rotated elements to the new array
    for (int i = 0; i < n; i++) {
        ans[i] = arr[(d + i) % n];
    }
    
    return ans;
}


int main() {
    int n, d;
    cout << "enter the size of array: ";
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i+1 << " element of the array: ";
        cin >> arr[i];
    }

    cout << "Enter the no. of left rotations: ";
    cin >> d;
    
    vector<int> rotatedArr = rotateLeft(d, arr);
    
    for (int i = 0; i < n; i++) {
        cout << rotatedArr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
