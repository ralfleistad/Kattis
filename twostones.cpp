#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int num;
    cin >> num;
    
    cout << (num % 2 == 0 ? "Bob" : "Alice") << endl;
    
    return 0;
}

