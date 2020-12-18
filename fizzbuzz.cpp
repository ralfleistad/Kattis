#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    int x;
    int y;
    int n;
    
    cin >> x;
    cin >> y;
    cin >> n;
    
    for(int i = 1; i < n + 1; i++) {
        if(i % x == 0 && i % y == 0) {
            cout << "FizzBuzz" << endl;
        }
        else if(i % x == 0) {
            cout << "Fizz" << endl;
        }
        else if(i % y == 0) {
            cout << "Buzz" << endl;
        }
        else {
            cout << i << endl;
        }
    }
    
    return 0;
}