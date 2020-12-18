#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    
    unordered_set< int > mySet;
    int num;
    while(cin >> num) {
        int mod = num % 42;
        mySet.insert(mod);
    }
    
    cout << mySet.size() << endl;
    
    return 0;
}

