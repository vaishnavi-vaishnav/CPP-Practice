#include <bits/stdc++.h>
using namespace std;

//Method - 1
int UsingSorting(int arr[], int n){

    sort(arr, arr + n);

    cout << "Minimum element: " << arr[0] << endl;
    cout << "Maximum element: " << arr[n - 1] << endl;

}
// The time complexity of this approach is O(n log n), where n is the number of elements in the array, 
// as we are using a sorting algorithm. The space complexity is O(1), as we are not using any extra space.



//Method - 2
int UsingLinearSearch(int arr[], int n){

    int min = arr[0];
    int max = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "Minimum Element: " << min << endl;
    cout << "Maximum Element: " << max << endl;

}

// Time Complexity: O(n)
// Auxiliary Space: O(1) as no extra space was needed.


int main(){

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
       cin >> arr[i];
    }

    cout << "Elements using sorting technique: " << endl;
    int result1 = UsingSorting(arr, n);

    cout << "Elements using linear search technique: " << endl;
    int result2 = UsingLinearSearch(arr, n);

    return 0;

}