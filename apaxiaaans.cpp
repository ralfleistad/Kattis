#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    string name;
    cin >> name;
    
    for(int i = 0; i < name.length(); i++) {
        if(name[i] != name[i + 1]) {
            cout << name[i];
        }
    }

    return 0;
}