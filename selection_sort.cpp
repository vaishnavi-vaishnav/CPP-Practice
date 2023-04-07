#include <bits/stdc++.h>
using namespace std;
  
void insert(int array[], int n) /* function to sort an array with insertion sort */  
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = array[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= array[j])  /* Move the elements greater than temp to one position ahead from their current position*/  
        {    
            array[j+1] = array[j];     
            j = j-1;    
        }    
        array[j+1] = temp;    
    }  
}  
  
void printArr(int array[], int n) /*  print the array */  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << array[i];   
}  
  
int main()  
{  
    // int a[] = { 12, 31, 25, 8, 32, 17 };  
    // int n = 6;

    int n, c, array[100];
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements of the array: ";
    for (c = 0; c < n; c++){
        cin >> array[c];
    }
    
        

    cout << "Before sorting array elements are - ";  
    printArr(array, n);  
    
    insert(array, n); 
    
    cout << "\nAfter sorting array elements are - ";    
    printArr(array, n);  
  
    return 0;  
}  

