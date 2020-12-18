#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

    string line;
    while(getline(cin, line)) {
        if(!line.find("Simon says")) {
            cout << line.substr(10, line.length() - 1) << endl;
        }
    }
    
    return 0;
}

