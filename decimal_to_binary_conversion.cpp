#include <bits/stdc++.h>
using namespace std;

// Method - 1 (Brute force)
int decToBinary(int n){

    int binaryNum[32];
    int i = 0;
    while (n != 0) {
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];

    return 0;
}

// Method - 2 (Bit manipulation)

int BitManipulation(int n){

    int ans = 0;
    for(int i = 0; n > 0 ; i++){

        //accessing last bit of n
        int bit = n & 1;

        // formula for converting n into binary (ans = (digit * 10^i) + ans)
        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;    // right shifting bits
        }

    cout << ans + 1 << endl;
    return 0;

}

int main() {
    int decimalNum;
    cout << "Enter a decimal number: ";
    cin >> decimalNum;
    decToBinary(decimalNum);
    cout << "" << endl;
    BitManipulation(decimalNum);
    return 0;
}

