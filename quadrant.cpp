#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    
    int x, y;
    cin >> x;
    cin >> y;
    
    bool positiveX = x > 0;
    bool positiveY = y > 0;
    
    if(positiveX && positiveY) {
        cout << 1 << endl;
    }
    else if(positiveX && !positiveY) {
        cout << 4 << endl;
    }
    else if(!positiveX && positiveY) {
        cout << 2 << endl;
    }
    else {
        cout << 3 << endl;
    }
    
    return 0;
}

