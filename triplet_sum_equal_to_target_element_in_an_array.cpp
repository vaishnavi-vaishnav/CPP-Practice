#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> PairSum(vector<int> &nums, int target){

    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());
    
    for(int i = 0; i < nums.size() ; i++){
        for(int j = i + 1; j < nums.size(); j++){
            for(int k = j + 1; k < nums.size(); k++){
                if(nums[i] + nums[j] + nums[k] == target){
                    ans.push_back(vector<int>{nums[i], nums[j], nums[k]});
                }
            }
        }
    }
    return ans;
}

int main(){

    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        int x;
        cout << "Enter " << i + 1 << " element of the array: ";
        cin >> x;
        arr[i] = x;
    }

    int target;
    cout << "Enter target element: ";
    cin >> target;

    vector<vector<int>> answer = PairSum(arr, target);

    for(int i = 0; i < answer.size(); i++){
        for(int j = 0; j < answer[i].size(); j++){
            cout << "[ " << answer[i][j] <<" ]" << " ";
        }    
        cout << endl;
    }
    cout << endl;

    return 0;
}
