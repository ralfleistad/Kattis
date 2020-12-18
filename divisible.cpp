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
using namespace std;

int main() {
    
    int cases;
    cin >> cases;
    
    for(int k = 0; k < cases; k++) {
        int div, nums;
        cin >> div >> nums;
        
        vector< int > vec (nums);
        vector< int > sums = {0};
        for(int i = 0; i < nums; i++) {
            cin >> vec[i];
            sums.push_back((sums.back() + vec[i]) % div);
        }
        
        int ans = 0;
        unordered_map< int, int > map;
        map[0] = 1;
        for(int i = 1; i <= nums; i++) {
            ans += map[sums[i] % div];
            map[sums[i] % div]++;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}

