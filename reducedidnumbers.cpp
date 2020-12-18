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
    cin >> n;
    
    vector< int > v (n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int count = 0;
    unordered_set< int > ans;
    while(ans.size() != n) {
        ans.clear();
        count++;
        
        for(int i = 0; i < v.size(); i++) {
            ans.insert( v[i] % count );
        }
    }
    
    cout << count << endl;
    
    return 0;
}


