#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int n;
    while(cin >> n) {
        if(n == 0 || n == 1) {
            cout << n;
        }
        else {
            cout << (n + n) - 2;
        }
        cout << endl;
    }

    return 0;
}