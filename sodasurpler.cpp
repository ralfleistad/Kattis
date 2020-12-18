#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    
    int empty, found, buy;
    cin >> empty >> found >> buy;
    
    empty += found;
    int drunk = 0;
    
    while(empty >= buy) {
        empty -= buy;
        drunk++;
        empty++;
    }
    
    cout << drunk << endl;
    
    return 0;
}

