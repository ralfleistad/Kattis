#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    
    int tests;
    cin >> tests;
    
    string line;
    
    int count = 0;
    bool won = false;
    for(int i = 0; i < tests; i++) {
        cin >> line;
        bool won = true;
        
        for(int j = 0; j < line.length() - 1; j++) {
            if(line[j] == 'C' && line[j + 1] == 'D') {
                won = false;
                break;
            }
        }
        
        if(won) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}

