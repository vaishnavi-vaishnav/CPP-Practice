#include <bits/stdc++.h>
using namespace std;

class employee {       // The class
  public:      
    string name;       // Access specifier
    double salary;        // Attribute (double variable)
};

int main() {
  employee e1;  // Create an object of MyClass

  // Access attributes and set values
  e1.name = "Vaishnavi"; 
  e1.salary = 2566600.0;

  // Print attribute values
  cout << e1.name << "\n";
  cout << e1.salary;

  return 0;
}