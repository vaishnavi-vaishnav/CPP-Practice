// input:
// 7
// 2 3 1 6 3 6 2

// 5
// 2 4 7 2 7

// output:
// 1

// 4


#include <iostream>
using namespace std;

int findUnique(int *arr, int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << findUnique(arr, n) << endl;
    return 0;
}