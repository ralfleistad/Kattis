#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <bitset>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int ans = 0;
    
    while(n) {
        ans = (ans << 1) | (n & 1);
        n >>= 1;
    }
    
    cout << ans << endl;
    
    return 0;
}

