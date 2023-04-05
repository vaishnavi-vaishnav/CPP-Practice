// Binary Search in C++

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
//   int array[] = {3, 4, 5, 6, 7, 8, 9};
//   int x = 4;
//   int n = sizeof(array) / sizeof(array[0]);

  int array[100], n, tgt;
  cout << "Enter the size of the array: ";
  cin >> n;
  cout << "Enter array elements: \n";
  for(int i = 0; i< n; i++){
    cin >> array[i];
  }
  cout << "Enter Target element: ";
  cin >> tgt;

  int result = binarySearch(array, tgt, 0, n - 1);

  if (result == -1)
    cout << "Not found";
  else
    cout << "Element is found at index " << result;
}