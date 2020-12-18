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

int findClosest(vector<int> vec, int target) {
    int min = INT_MAX;
    int sum = 0;
    
    for(int i = 0; i < vec.size() - 1; i++) {
        for(int j = i + 1; j < vec.size(); j++) {
            
            int temp_sum = (vec[i] + vec[j]);
            int diff = abs(target - temp_sum);
            
            if(temp_sum == target) {
                return temp_sum;
            }
            else if(diff < min) {
                min = diff;
                sum = temp_sum;
            }
        }
    }
    
    return sum;
}

int main() {
    
    int n, m, q, cases = 1;
    while(cin >> n) {
        
        cout << "Case " << cases++ << ":" << endl;
        
        vector< int > v (n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        
        cin >> m;
        for(int i = 0; i < m; i++) {
            cin >> q;
            int ans = findClosest(v, q);
            cout << "Closest sum to " << q << " is " << ans << "." << endl;
        }
    }
    
    return 0;
}


