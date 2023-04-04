#include <bits/stdc++.h>
using namespace std;


int main(){
    
    string str;
    int length, i;
    
    cout << "enter the string: ";
    cin >> str;
    length = str.length();
    
    for(i = length-1; i >= 0; i--){
        cout << str[i];
    }
    cout << "\nlength of the string:" << length << endl;
    return 0;
}

