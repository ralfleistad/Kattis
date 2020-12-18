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
    
    int n;
    while(cin >> n) {
        
        if(n <= 3) {
            cout << 1 << endl;
        }
        else {
            int ans = ceil( log10(2 * M_PI * n) / 2 + n * (log10(n / M_E)));
            cout << ans << endl;
        }
    }
    
    return 0;
}


