#include <bits/stdc++.h>
using namespace std;

//Method - 1 Brute Force (TIME LIMIT EXCEEDED)

// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m){
//     vector<int> ans;
//     for(int i = 0; i < n; i++){
//         int element = arr1[i];
//         for(int j = 0; j < m; j++) {
//             if(arr2[j] == element){
//             ans.push_back(element);
//             arr2[j] = INT_MIN;
//             break;
//             }
//         }
        
//     }
//     return ans;
// }

// Method - 1 Two Pointer Approach (Optimized Solution)
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m){
    int i = 0;
    int j = 0;
    vector<int> ans;

    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}


int main(){

    int n, m;
    cin >> n >> m;

    vector<int> arr1;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    vector<int> arr2;
    for(int j = 0; j < m; j++){
        int y;
        cin >> y;
        arr2.push_back(y);
    }

    vector<int> answer = findArrayIntersection(arr1, n, arr2, m);
    
    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << " ";
    }
    cout << endl;

    return 0;
}





