#include <bits/stdc++.h>
using namespace std;

int duplicateElement(vector<int> arr, int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
    for(int i = 1; i < n; i++){
        ans = ans ^ i;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << duplicateElement(arr, n) << endl;
    return 0;
}
