#include <bits/stdc++.h>
using namespace std;

// Method - 1 (Using Sorting)

// int main(){

//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     int arr[n];
    
//     for(int i = 0; i < n; i++){
//        cin >> arr[i];
//     }

//     sort(arr, arr + n);

//     cout << "Minimum element: " << arr[0] << endl;
//     cout << "Maximum element: " << arr[n - 1] << endl;

//     return 0;

// }

// Method - 1 (Using linear search)


int UsingSorting(int arr[], int n){

    sort(arr, arr + n);

    cout << "Minimum element: " << arr[0] << endl;
    cout << "Maximum element: " << arr[n - 1] << endl;

}

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