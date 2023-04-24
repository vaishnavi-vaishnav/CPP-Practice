#include <iostream>
using namespace std;

int reverseBits(int n) {

        int ans = 0;
        int power = 31;
        while(n != 0){
            // storing the reversed bit in ans at position 'power' i.e 31
            // ans = 0 + (n & 1) << 31
            // ans = 0 + (n & 1) << 30
            // ans = 01 + (n & 1) << 29
            ans += (n & 1) << power;
            n = n >> 1;
            power--;
        }
       
        return ans;

    }

int main(){

    int n;
    cin >> n;
    cout << reverseBits(n) << endl;

}