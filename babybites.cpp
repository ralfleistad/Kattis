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
    
    int n;
    cin >> n;
    
    string input;
    bool sense = true;
    for(int i = 1; i <= n; i++) {
        cin >> input;
        
        if(to_string(i) != input && input != "mumble") {
            sense = false;
            break;
        }
    }
    
    cout << (sense ? "makes sense" : "something is fishy") << endl;
    
    return 0;
}


