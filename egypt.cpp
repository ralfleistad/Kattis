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
    
    int a, b, c;
    while(true) {
        cin >> a >> b >> c;
        
        if(a == 0 && b == 0 && c == 0) {
            break;
        }
        
        vector< int > v {a, b, c};
        sort(v.begin(), v.end());
        
        int min = pow(v[0], 2);
        int mid = pow(v[1], 2);
        int max = pow(v[2], 2);

        cout << (max == min + mid ? "right" : "wrong") << endl;
    }
    
    return 0;
}


