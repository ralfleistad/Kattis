#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <bitset>
#include <climits>
#include <queue>
#include <cstring>
#include <map>
#include <sstream>
using namespace std;

int main() {
    
    string line;
    getline(cin, line);
    
    int len = line.length();
    double white = 0, lower = 0, upper = 0, symbol = 0;
    for(int i = 0; i < len; i++) {
        int ascii = (int)line[i];
        
        if(ascii >= 65 && ascii <= 90) {
            upper++;
        }
        else if(ascii >= 97 && ascii <= 122) {
            lower++;
        }
        else if(ascii == 95) {
            white++;
        }
        else {
            symbol++;
        }
    }
    
    cout << fixed << setprecision(15) << (white / len) << endl; // white
    cout << fixed << setprecision(15) << (lower / len) << endl; // lower
    cout << fixed << setprecision(15) << (upper / len) << endl; // upper
    cout << fixed << setprecision(15) << (symbol / len) << endl; // symbol
    
    return 0;
}


