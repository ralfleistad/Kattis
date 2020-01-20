#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <bitset>
#include <climits>
#include <queue>
#include <cstring>
#include <map>
using namespace std;

int main() {
    
    string res = "";
    char c, prev;
    int idx = 0;
    
    while(true) {
        
        c = getchar();
        if(c == EOF) { break; }
        
        if(c == '<') {
            res.pop_back();
        }
        else {
            res += c;
        }
    }
    
    cout << res;
    
    return 0;
}


