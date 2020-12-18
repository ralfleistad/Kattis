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
    
    unordered_map< char, int > map;
    string card;
    int max = 0;
    for(int i = 0; i < 5; i++) {
        cin >> card;
        map[card[0]]++;
        
        if(map[card[0]] > max) {
            max = map[card[0]];
        }
    }
    
    cout << max << endl;
    
    return 0;
}


