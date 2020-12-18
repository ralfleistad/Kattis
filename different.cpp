#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    
    long long num1, num2;
    while(cin >> num1 >> num2) {
        cout << abs(num2 - num1) << endl;
    }
    
    return 0;
}

