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
#include <set>
using namespace std;

struct Minion {
    int min;
    int max;
};

bool CMP(const Minion a, const Minion b) {
    if(a.max == b.max) {
        return a.min < b.min;
    }
    return a.max < b.max;
}

int main() {
    
    int lines;
    cin >> lines;
    
    vector< Minion > vec;
    for(int i = 0; i < lines; i++) {
        Minion m;
        cin >> m.min >> m.max;
        vec.push_back(m);
    }
    
    sort(vec.begin(), vec.end(), CMP);

    int rooms = 1;
    int curr = vec[0].max;
    for(int i = 1; i < vec.size(); i++) {
        if(vec[i].min > curr) {
            curr = vec[i].max;
            rooms++;
        }
    }
    
    cout << rooms << endl;
    
    return 0;
}

