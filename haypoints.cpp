#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    
    unordered_map< string, int > map;
    int m, n;
    
    cin >> m >> n;
    
    string word;
    int sal;
    for(int i = 0; i < m; i++) {
        cin >> word;
        cin >> sal;
        map.insert( {word, sal} );
    }
    
    int salary = 0;
    while(cin >> word) {
        if(word == ".") {
            cout << salary << endl;
            salary = 0;
        }
        
        if(map.count(word) != 0) {
            salary += map[word];
        }
    }
    
    return 0;
}