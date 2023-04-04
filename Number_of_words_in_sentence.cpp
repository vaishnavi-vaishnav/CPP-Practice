/******************************************************************************

program to find the no. od words in a string

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int count = 0;
    
    for (int i = 0; i < str.size(); i++){
        if(str[i] == ' '){
            count++;
        }
        
    }
    cout << count + 1;
    

    return 0;
}
