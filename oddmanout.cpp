#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    
    int tests;
    cin >> tests;
    
    
    int nums, num;
    unordered_map< int, int > map;
    for(int i = 0; i < tests; i++) {
        cin >> nums;
        
        for(int j = 0; j < nums; j++) {
            cin >> num;
            
            if(map.count(num) == 0) {
                map.insert( {num, 1} );
            }
            else {
                map[num]++;
            }
        }
        
        cout << "Case #" << i+1 << ": ";
        for(auto n : map) {
            if(n.second == 1) {
                cout << n.first << " ";
            }
        }
        cout << endl;
        map.clear();
    }
    
    return 0;
}

