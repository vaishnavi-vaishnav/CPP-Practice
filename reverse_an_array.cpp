#include<bits/stdc++.h>
using namespace std;

void IterativeMethod(int arr[], int start, int end){

    while(start < end){
        // swap(arr[start], arr[end]);
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

}

void RecursiveMethod(int arr[], int start, int end){
    if(start >= end)
        return;
    // swap(arr[start], arr[end]);    
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    RecursiveMethod(arr, start+1, end-1);
}

void PrintArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << "Iterative method to reverse an array: " << endl; 
    IterativeMethod(arr, 0, n-1);
    PrintArray(arr, n);

    cout << "Recursive method to reverse an array: " << endl; 
    RecursiveMethod(arr, 0, n-1);
    PrintArray(arr, n);

    return 0;

}
