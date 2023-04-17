#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSubArray(int nums[], int n) {
    // int n = nums.size();
    int max_so_far = nums[0];
    int max_ending_here = nums[0];

    for (int i = 1; i < n; i++) {
        max_ending_here = max(nums[i], max_ending_here + nums[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }

    return max_so_far;
}

int main() {
    // vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int n;
    cin >> n;
    int nums[n];

    for(int  i = 0; i < n; i++){
        cin >> nums[i];
    }

    cout << maxSubArray(nums, n) << endl;
    return 0;
}
