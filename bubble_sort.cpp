// C++ program for implementation of Bubble sort

#include <bits/stdc++.h>
using namespace std; 

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j,temp;
   for (i = 0 ; i < n; i++)
   {
       for (j = i + 1; j < n; j++)
       {
           if (arr[j] < arr[i])
           {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
   }
   
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    for (int i=0; i < size; i++)
        cout << arr[i];
    cout << "\n";
}
 
int main()
{

    int n, array[100];
    cout << "Enter number of elements:\n";
    cin >> n; 

    cout << "Enter " << n << " integers:\n";
    for (int c = 0; c < n; c++)
      cin >> array[c]; 

    bubbleSort(array, n);
    cout << "Sorted array: \n";
    printArray(array, n);
    return 0;
}
