#include <iostream>

using namespace std;

int main() {
    float num;
    cout << "Enter a float number: ";
    cin >> num;
    int sum = 0;
    int digits = 0;
    while (num > 0) {
        num *= 10;
        int digit = int(num) % 10;
        if (digits > 0) {
            sum += digit;
        }
        digits++;
        num -= digit;
    }
    cout << "The sum of digits after decimal point is: " << sum << endl;
    return 0;
}
