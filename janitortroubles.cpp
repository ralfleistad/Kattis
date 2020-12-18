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
using namespace std;

int main() {
    
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    
    double semi = (a + b + c + d) / 2.0;
    double ans = sqrt((semi - a) * (semi - b) * (semi - c) * (semi - d));
    
    cout << fixed << setprecision(15) << ans << endl;
    
    return 0;
}


