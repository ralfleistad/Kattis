#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

char hasher(string str) {
    char hash = (char) 0;
    
    for(int i = 0; i < str.length(); i++) {
        hash ^= str[i];
    }
    
    return hash;
}

int main() {
    
    int n = 1;
    string line;
    unordered_map< string, int > unique;
    
    while(true) {
        
        cin >> n;
        cin.ignore();
        
        if(n == 0) {
            break;
        }
        
        for(int i = 0; i < n; i++) {
            getline(cin, line);
            
            if(unique.count(line) == 0) {
                unique.insert( {line, 1} );
            }
            else {
                unique[line]++;
            }
        }
        
        int collisions = 0;
        for(auto file1 : unique) {
            char hash1 = hasher(file1.first);
            
            for(auto file2 : unique) {
                if(file1.first != file2.first) {
                    char hash2 = hasher(file2.first);
                    
                    if(hash1 == hash2) {
                        collisions += file1.second * file2.second;
                    }
                }
            }
        }
        
        cout << unique.size() << " " << collisions / 2 << endl;
        
        unique.clear();
    }
    
    return 0;
}