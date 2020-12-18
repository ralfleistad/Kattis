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
    
    int cases, row, col, test = 1;
    cin >> cases;
    
    char c;
    while(cases--) {
        cin >> row >> col;
        
        vector<vector< char >> v;
        v.resize(row);
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                cin >> c;
                v[i].push_back(c);
            }
        }
        
        cout << "Test " << test << endl;
        for(int i = row - 1; i >= 0; i--) {
            for(int j = col - 1; j >= 0; j--) {
                cout << v[i][j];
            }
            cout << endl;
        }
        
        test++;
    }
    
    return 0;
}


