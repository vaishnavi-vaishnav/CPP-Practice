#include <iostream>
#include <math.h>
using namespace std;

int BinaryToDecimal(int n){
 
    int ans = 0, i = 0;
    while(n != 0){
        //For accessing bits 
        // int bit = n & 1;  

        // for accessing digits
        int digit = n % 10;   // because input format is in int type

        if(digit == 1){
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << ans << endl;
    return 0;
}

int main(){

    int n;
    cin >> n;
    BinaryToDecimal(n);

    return 0;
}