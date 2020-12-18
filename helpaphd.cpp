#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    
    int cases;
    cin >> cases;
    
    string line;
    for(int i = 0; i < cases; i++) {
        cin >> line;
        
        if(line == "P=NP") {
            cout << "skipped" << endl;
        }
        else {
            int plus = line.find("+");
            int first = stoi(line.substr(0, plus));
            int second = stoi(line.substr(plus, line.length() - 1));
            
            cout << first + second << endl;
        }
    }
    
    return 0;
}

