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

bool cmp(const pair<string, int> a, const pair<string, int> b) {
    if(a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main() {
    
    int cases, amount, lines;
    string toy;
    
    cin >> cases;
    while(cases--) {
        cin >> lines;
        
        unordered_map< string, int > wares;
        for(int i = 0; i < lines; i++) {
            cin >> toy >> amount;
            wares[toy] += amount;
        }
        
        vector< pair<string, int>> v;
        for(auto el : wares) {
            v.push_back(make_pair(el.first, el.second));
        }
        
        sort(v.begin(), v.end(), cmp);
        
        cout << v.size() << endl;
        for(int i = 0; i < v.size(); i++) {
            cout << v[i].first << " " << v[i].second << endl;
        }
        
    }
    
    return 0;
}


