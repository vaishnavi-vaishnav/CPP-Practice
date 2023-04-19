#include <iostream>
using namespace std;

class complex {
    int a, b;
public:
    void set_data(int x, int y) {
        a = x;
        b = y;
    }
    void display_data() {
        cout << "a = " << a << ", b = " << b << endl;
    }
    complex add(complex c) { // corrected spelling of "complex" and added return statement
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp; // added return statement to return the sum
    }
}; // added semicolon to close the class definition

int main() {
    complex c1, c2, c3;
    int n, m, q, w;

    cout << "Enter two numbers: ";
    cin >> n >> m;
    c1.set_data(n, m); // set the values of the first complex number
    
    cout << "Enter two other numbers: ";
    cin >> q >> w;
    c2.set_data(q, w); // set the values of the second complex number
    
    c3 = c1.add(c2); // add the two complex numbers and store the result in c3
    
    cout << "Sum of the complex numbers: ";
    c3.display_data(); // display the result
    return 0;
}
