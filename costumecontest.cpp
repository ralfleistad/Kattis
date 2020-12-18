#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    
    int lines;
    cin >> lines;
    
    string costume;
    map< string, int > map;
    
    for(int i = 0; i < lines; i++) {
        cin >> costume;
        
        if(map.count(costume) == 0) {
            map.insert( {costume, 1} );
        }
        else {
            map[costume]++;
        }
    }
    
    int highest = 1001;
    for(auto e : map) {
        if(e.second < highest) {
            highest = e.second;
        }
    }
    
    for(auto e : map) {
        if(e.second == highest) {
            cout << e.first << endl;
        }
    }
    
    return 0;
}

