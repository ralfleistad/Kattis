#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    
    int n;
    cin >> n;
    
    unordered_map< int, int > map;
    
    int num;
    for(int i = 0; i < n; i++) {
        cin >> num;

        if(map.count(num) == 0) {
            map.insert( {num, i + 1} );
        }
        else {
            map[num] = -1;
        }
    }
    
    int max = 0, idx = 0;
    for(auto e : map) {
        if(e.first > max && e.second != -1) {
            max = e.first;
            idx = e.second;
        }
    }
    
    if(max == 0) {
        cout << "none" << endl;
    } else {
        cout << idx << endl;
    }
    
    return 0;
}

