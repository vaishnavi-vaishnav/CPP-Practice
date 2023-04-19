
#include <bits/stdc++.h>
using namespace std;

// CREATION OF STRUCTURE
// struct employee {
//     string name;
//     double salary;
// }e1, e2, e3;

// int main() {
//     employee e1, e2, e3;
//     e1.name = "John ";
//     e1.salary = 50000.0;
    
//     e2.name = " Doe";
//     e2.salary = 80000.0;
    
//     e3.name = "fox";
//     e3.salary = 90000.0;

//     cout << "Employee name: " << e1.name << endl;
//     cout << "Employee salary: " << e1.salary << endl;
    
//     cout << "Employee name: " << e2.name << endl;
//     cout << "Employee salary: " << e2.salary << endl;
    
//     cout << "Employee name: " << e3.name << endl;
//     cout << "Employee salary: " << e3.salary << endl;

//     return 0;
// }




// EXAMPLE - 1 OF A STRUCTURE CREATION

struct student{
    string name;
    int marks;
}s1;

int main(){

    cout << "Enter the name and marks of the student out of 100: " << endl;
    cin >> s1.name >> s1.marks;

    cout << s1.name << "'s maximum marks is " << s1.marks << " out of 100." << endl;

    return 0;

}



