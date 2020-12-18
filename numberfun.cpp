#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    int tests;
    double a;
    double b;
    double c;
    
    cin >> tests;
    for(int i = 0; i < tests; i++) {
        cin >> a;
        cin >> b;
        cin >> c;
        
        if(a + b == c) {
            cout << "Possible" << endl;
        }
        else if(a - b == c || b - a == c) {
            cout << "Possible" << endl;
        }
        else if(a * b == c) {
            cout << "Possible" << endl;
        }
        else if(a / b == c || b / a == c) {
            cout << "Possible" << endl;
        }
        else {
            cout << "Impossible" << endl;
        }
    }
    
    return 0;
}