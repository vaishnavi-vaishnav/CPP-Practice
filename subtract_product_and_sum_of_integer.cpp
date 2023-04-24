#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int product = 1, sum = 0;

    while(n != 0){

        int digit = n % 10;  //finding last digit
        product = product * digit;
        sum += digit;

        n = n / 10; // n after removing the digit
    }
    cout << product - sum << endl;

    return 0;
}