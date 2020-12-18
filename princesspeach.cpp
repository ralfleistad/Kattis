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
    
    int obs, found;
    cin >> obs >> found;
    
    unordered_set< int > set;
    int num;
    for(int i = 0; i < found; i++) {
        cin >> num;
        set.insert(num);
    }
    
    for(int i = 0; i < obs; i++) {
        if(set.count(i) == 0) {
            cout << i << endl;
        }
    }
    
    cout << "Mario got " << set.size() << " of the dangerous obstacles." << endl;
    
    return 0;
}


