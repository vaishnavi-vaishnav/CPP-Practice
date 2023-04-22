#include<iostream>
using namespace std;

int main(){


    // Pattern - 1
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout << j << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

// --------------------------------------------------------------------------

    // Pattern - 2
    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout << n - j + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

// --------------------------------------------------------------------------

    // Pattern - 3
    // 1 2 3
    // 4 5 6
    // 7 8 9

    // int n;
    // cin >> n;

    // int i = 1, count = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout << count << " ";
    //         count ++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


// --------------------------------------------------------------------------

    // Pattern - 4
    // *
    // * *
    // * * *
    // * * * *

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= i){
    //         cout << "*" << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


// --------------------------------------------------------------------------

    // Pattern - 5
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= i){
    //         cout << i << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


// --------------------------------------------------------------------------

    // Pattern - 6
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    // int n;
    // cin >> n;

    // int i = 1, count = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= i){
    //         cout << count << " ";
    //         count ++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


// --------------------------------------------------------------------------

    // Pattern - 7
    // 1
    // 2 3
    // 3 4 5 
    // 4 5 6 7

    // int n;
    // cin >> n;

    // int i = 1;
    // while(i <= n){
    //     int j = 1, value = i;
    //     while(j <= i){
    //         cout << value << " ";
    //         value ++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // OR

    // int n;
    // cin >> n;
    // int i = 1;
    // int j = 1;

    // while (i <= n) {
    //     j = i;
    //     while (j <= i + i - 1) {
    //         cout << j << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

// --------------------------------------------------------------------------

    // Pattern - 8
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
    //     int j = 1, value = i;
    //     while(j <= i){
    //         cout << value << " ";  
    //         value --;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // OR

    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
    //     int j = 1; 
    //     while(j <= i){
    //         cout << i - j + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

// --------------------------------------------------------------------------

    // Pattern - 9
    // A A A
    // B B B
    // C C C

    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
    //     int j = 1; 
    //     while(j <= n){
    //         char ch = 'A' + i - 1;
    //         cout << ch << " ";  
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

// --------------------------------------------------------------------------

    // Pattern - 9
    // A B C
    // A B C
    // A B C

    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
    //     int j = 1; 
    //     while(j <= n){
    //         char ch = 'A' + j - 1;
    //         cout << ch << " ";  
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


// --------------------------------------------------------------------------

    // Pattern - 10
    // A B C
    // D E F
    // G H I

    // int n;
    // cin >> n;
    // char start = 'A'; 
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout << start << " ";  
    //         start ++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


// --------------------------------------------------------------------------

    // Pattern - 11

    // A B C
    // B C D
    // C D E

    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     char ch = 'A' + n - i;
    //     while(j <= n){
    //         char ch = i + j + 'A' - 2;
    //         cout << ch << " ";  
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

// ----------------------------------------------------------------

// Pattern - 12

    // A 
    // B B
    // C C C

    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     char ch = 'A' + i - 1;
    //     while(j <= i){
    //         cout << ch << " ";  
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


// ----------------------------------------------------------------

// Pattern - 13

    // A 
    // B C
    // D E F
    // G H I J

    // int n;
    // cin >> n;
    // char start = 'A';
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
        
    //     while(j <= i){
    //         cout << start << " ";  
    //         start++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


// ----------------------------------------------------------------

// Pattern - 14

    // A 
    // B C
    // C D E
    // D E F G

    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     char start = 'A' + i + j - 2;
    //     while(j <= i){
    //         cout << start << " ";  
    //         start++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

// ----------------------------------------------------------------

// Pattern - 15

    // D
    // C D
    // B C D
    // A B C D

    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     char start = 'A' + n - i;
    //     while(j <= i){
    //         cout << start << " ";  
    //         start++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

// ----------------------------------------------------------------

// Pattern - 16

    // D
    // C D
    // B C D
    // A B C D

    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     char start = 'A' + n - i;
    //     while(j <= i){
    //         cout << start << " ";  
    //         start++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }



// ----------------------------------------------------------------

// Pattern - 17

    //  -  -  -  *
    //  -  -  *  *
    //  -  *  *  *
    //  *  *  *  * 
    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
        // program for spaces 
    //     int space = n - i;
    //     while(space){
    //         cout << " ";
    //         space --;
    //     }
      // program for printing stars
    //     int j = 1;
    //     while(j <= i){
    //         cout << "*";  
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

// ----------------------------------------------------------------

// Pattern - 18

    //  * * * * 
    //  * * * 
    //  * * 
    //  *

    // int n;
    // cin >> n;
    // int i = 1;
    // while(i <= n){
        // program for printing stars
    //     int stars = n - i + 1;
    //     while(stars){
    //         cout << "*";  
    //         stars --;
    //     }
    //     cout << endl;
    //     i++;
    // }

// ----------------------------------------------------------------

// Pattern - 19

    //  * * * * 
    //  - * * * 
    //  - - * * 
    //  - - - *

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n) {
    //     int j = 1;
    //     while (j <= i) {
    //         cout << " ";
    //         j++;
    //     }
        
    //     int stars = n - i + 1;
    //     while (stars ) {
    //         cout << "*";
    //         stars--;
    //     }
        
    //     cout << endl;
    //     i++;
    // }

// ----------------------------------------------------------------

// Pattern - 20

    //  1 1 1 1 
    //  - 2 2 2 
    //  - - 3 3 
    //  - - - 4

    // int n;
    // cin >> n;
    // int i = 1;
    // int count = 1;
    // while (i <= n) {
    //     int j = 1;
    //     while (j <= i) {
    //         cout << " ";
    //         j++;
    //     }
    //     int k = 1;
    //     while (k <= n - i + 1) {
    //         cout << count;
    //         k++;
    //     }
    //     cout << endl;
    //     i++;
    //     count++;
    // }
    

// ----------------------------------------------------------------

// Pattern - 21

    //  - - - 1 
    //  - - 2 2 
    //  - 3 3 3 
    //  4 4 4 4

    // int n;
    // cin >> n;
    // int i = 1;
    // int count = 1;

    // while (i <= n) {
    //     int space = n - i;
    //     while (space) {
    //         cout << " ";
    //         space --;
    //     }

    //     int k = 1;
    //     while (k <= i) {
    //         cout << count;
    //         k++;
    //     }
    //     cout << endl;
    //     i++;
    //     count++;
    // }
    

// ----------------------------------------------------------------

// Pattern - 22

    //  1 2 3 4 
    //  - 2 3 4 
    //  - - 3 4 
    //  - - - 4

    // int n;
    // cin >> n;
    // int i = 1;
    // int count = 1;
    // while (i <= n) {
    //     int j = 1;
    //     while (j <= i) {
    //         cout << " ";
    //         j++;
    //     }
    //     int k = 1;
    //     while (k <= n - i + 1) {
    //         cout << count;
    //         k++;
    //         count++;
    //     }
    //     cout << endl;
    //     i++;
    //     count = i;
    // }

// ----------------------------------------------------------------

// Pattern - 23

    //  - - - 1 
    //  - - 2 3 
    //  - 4 5 6 
    //  7 8 9 10

    // int n;
    // cin >> n;
    // int i = 1;
    // int count = 1;

    // while (i <= n) {
    //     int space = n - i;
    //     while (space) {
    //         cout << " ";
    //         space --;
    //     }

    //     int k = 1;
    //     while (k <= i) {
    //         cout << count;
    //         k++;
    //         count ++;
    //     }
    //     cout << endl;
    //     i++;
        
    // }

// ----------------------------------------------------------------

// Pattern - 23

    //  - - - 1 - - -
    //  - - 1 2 1 - -
    //  - 1 2 3 2 1 -
    //  1 2 3 4 3 2 1

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n) {
    //     int j = 1, space = n - i;
    //     while(space){
    //         cout << " " << " ";
    //         space --;
    //     }

    //     while(j <= i){
    //         cout << j << " ";
    //         j++;
    //     }

    //     int start = i - 1;
    //     while(start){
    //         cout << start << " ";
    //         start--;
    //     }
    //     cout << endl;
    //     i++;
        
    
        
    // }


// ----------------------------------------------------------------

// Pattern - 24

    //  1 2 3 4 5 5 4 3 2 1
    //  1 2 3 4 * * 4 3 2 1
    //  1 2 3 * * * * 3 2 1
    //  1 2 * * * * * * 2 1
    //  1 * * * * * * * * 1

    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int num1 = 1;
        while(num1 <= n - i + 1){
            cout << num1 << " ";
            num1++;
        }
       int stars_1 = 1;
       while(stars_1 <= i - 1){
            cout << "* ";
            stars_1++;
        }
        int stars_2 = 1;
        while(stars_2 <= i - 1){
            cout << "* ";
            stars_2++;
        }
        int j = 1, num2 = n - i + 1;
        
        while(num2){
            cout << num2 << " ";
            num2--;
        }
        
        cout << endl;
        i++;

    }

    return 0;
}