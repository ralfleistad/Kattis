#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int tests;
    cin >> tests;
    
    int num;
    for(int i = 0; i < tests; i++) {
        cin >> num;
        cout << ceil(num / 400.0) << endl;
    }

    return 0;
}