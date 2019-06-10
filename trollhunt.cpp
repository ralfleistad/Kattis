#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <bitset>
#include <climits>
#include <queue>
#include <cstring>
#include <map>
using namespace std;

int main() {
    
    int b, k, g, groups;
    cin >> b >> k >> g;
    
    bool calc = (b - 1) % (groups = k / g) == 0;
    
    cout << (calc ? (b - 1) / groups : (b - 1) / groups + 1) << endl;
    
    return 0;
}


