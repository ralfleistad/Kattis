#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    
    unordered_set< string > set;
    int tests, cities;
    string city;
    
    cin >> tests >> cities;
    
    for(int i = 0; i < tests; i++) {
        for(int j = 0;  j < cities; j++) {
            cin >> city;
            if(set.count(city) == 0) {
                set.insert(city);
            }
        }
        
        cout << set.size() << endl;
        set.clear();
        cin >> cities;
    }
    
    return 0;
}

