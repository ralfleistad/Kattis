#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    int tests;
    cin >> tests;
    
    int num;
    while(cin >> num) {
        
        int sum = 1;
        for(int i = 1; i < num + 1; i++) {
            sum *= i;
        }
        
        cout << sum % 10 << endl;
    }
    
    return 0;
}