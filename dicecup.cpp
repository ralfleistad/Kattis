#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <bitset>
#include <climits>
#include <queue>
#include <cstring>
#include <map>
#include <sstream>
#include <iterator>
using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;
    
    int mx = max(a, b);
    int mn = min(a, b);
    
    for(int i = mn + 1; i < mx + 2; i++) {
        cout << i << endl;
    }
    
    return 0;
}


