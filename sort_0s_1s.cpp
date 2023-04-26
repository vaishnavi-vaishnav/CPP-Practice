#include <bits/stdc++.h>
using namespace std;

void SortZeroOne(int arr[], int n){

    int left = 0, right = n - 1;
    while(left < right){
        if(arr[left] == 0 && left < right){
            left++;
        }
        if(arr[right] == 1 && left < right){
            right--;
        }
        if(arr[left] == 1 && arr[right] == 0){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    SortZeroOne(arr, n);

    return 0;
}
