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
        if(i == 0) {
            cout << name[i];
        }
        
        if(name[i] == '-') {
            cout << name[i+1];
        }
    }

    return 0;
}