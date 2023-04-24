#include <iostream>
#include <math.h>
using namespace std;

bool isPowerOfTwo(int n) {

        int ans = 1;
        for(int  i = 0; i <= 30; i++){
            ans = pow(2, i);
            if(ans == n){
                return true;
            }
            // if(ans < INT_MAX / 2){
            //     ans = ans * 2;
            // }
        }
        return false;
    }

int main(){
    int n;
    cin >> n;

    bool result = isPowerOfTwo(n);
    if(result)
        cout << "true" << endl;
    else 
        cout << "false" << endl;
    
    return 0;
}