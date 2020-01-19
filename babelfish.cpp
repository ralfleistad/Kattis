#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    
    string word, weird, line;
    unordered_map< string, string > map;
    
    while(getline(cin, line)) {
        if(line.empty()) {
            break;
        }
        
        int space = line.find(" ");
        word = line.substr(0, space);
        weird = line.substr(space + 1, line.length() - 1);
        
        map.insert( {weird, word} );
    }
    
    while(cin >> line) {
        cout << (map.count(line) != 0 ? map[line] : "eh") << endl;
    }
    
    return 0;
}

