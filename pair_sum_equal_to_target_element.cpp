#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> PairSum(vector<int> &arr, int n, int target){

     vector<vector<int>> ans;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
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

    vector<vector<int>> answer = PairSum(arr, n, target);

    for(int i = 0; i < answer.size(); i++){
        for(int j = 0; j < answer[i].size(); j++){
            cout << "[ " << answer[i][j] <<" ]" << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}