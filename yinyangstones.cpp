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
#include <iterator>
using namespace std;

int main() {
    
    int w = 0, b = 0;
    string in;
    
    getline(cin, in);
    for(int i = 0; i < in.length(); i++) {
        if(in[i] == 'W') {
            w++;
        } else {
            b++;
        }
    }
    
    cout << (w == b ? 1 : 0) << endl;
    
    return 0;
}


