#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    int tests;
    int revenue;
    int expected;
    int cost;
    
    cin >> tests;
    
    for(int i = 0; i < tests; i++) {
        cin >> revenue;
        cin >> expected;
        cin >> cost;
        
        if(expected - cost == revenue) {
            cout << "does not matter" << endl;
        }
        else if(expected - cost > revenue) {
            cout << "advertise" << endl;
        }
        else {
            cout << "do not advertise" << endl;
        }
    }
    
    
    return 0;
}