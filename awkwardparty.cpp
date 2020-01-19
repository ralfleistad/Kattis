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
using namespace std;


int main() {
    
    int n;
    cin >> n;
    
    int num;
    int ans = n;
    unordered_map< int, int > map;
    for(int i = 0; i < n; i++) {
        cin >> num;
        
        if(!map.count(num)) {
            map.insert( {num, i} );
        } else {
            if(i - map[num] < ans) {
                ans = i - map[num];
                map[num] = i;
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}

