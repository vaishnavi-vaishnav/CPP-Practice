
#include<iostream>
using namespace std;

int main(){
    int n, term1 = 0, term2 = 1, next;
    cout << "Enter the length of the series you want: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i)
    {
        if(i==1){
            cout << term1<<", ";
            continue;
        }
        if(i==2)
        {
            cout << term2<<", ";
            continue;
        }
        next = term1 + term2;
        term1 = term2;
        term2 = next;

        cout << next << ", ";

    }
    return 0;
}
