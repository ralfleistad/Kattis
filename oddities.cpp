#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    
    int num;
    cin >> num;
    
    while(cin >> num) {
        cout << num << (num % 2 == 0 ? " is even" : " is odd") << endl;
    }
    
    return 0;
}