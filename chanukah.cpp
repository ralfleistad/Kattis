#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    int tests;
    cin >> tests;
    
    int caseNum, days;
    for(int i = 0; i < tests; i++) {
        cin >> caseNum >> days;
        
        int sum = 0;
        for(int j = 1; j <= days; j++) {
            sum += j + 1;
        }
        
        cout << caseNum << " " << sum << endl;
    }

    return 0;
}