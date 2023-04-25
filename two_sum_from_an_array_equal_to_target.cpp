// Given an array of integers nums and an integer target, return indices 
// of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, 
// and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector <int>& arr, int target){

    int n = arr.size();
    //vector array creation
    vector<int> ans;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;

}

int main(){

    vector<int> arr;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int target;
    cin >> target;

    vector<int> index = twoSum(arr, target);

    for (int i = 0; i < index.size(); i++) {
        cout << index[i] << " ";
    }
    cout << endl;

    return 0;
}

