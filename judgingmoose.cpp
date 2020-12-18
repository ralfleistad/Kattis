#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    int l, r;
    cin >> l;
    cin >> r;
    
    if(l == 0 && r == 0) {
        cout << "Not a moose" << endl;
    }
    else if(l == r) {
        cout << "Even " << l + r << endl;
    }
    else {
        int temp = l - r;
        int missing = abs(temp);
        cout << "Odd " << l + r + missing << endl;
    }
    
    return 0;
}