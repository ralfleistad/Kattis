#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <cmath>

using namespace std;

int main() {
    
    unordered_map< char, int > map;
    map['T'] = 0;
    map['C'] = 0;
    map['G'] = 0;
    
    string line;
    getline(cin, line);
    
    for(int i = 0; i < line.length(); i++) {
        map[line[i]]++;
    }
    
    int total = 0;
    int min = 51;
    for(auto n : map) {
        total += pow(n.second, 2);
        
        if(n.second < min) {
            min = n.second;
        }
    }
    
    total += min * 7;
    cout << total << endl;
    
    return 0;
}

