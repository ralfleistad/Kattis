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
using namespace std;

bool check(string s1, string s2) {
    if(s1.length() < s2.length()) {
        for(int i = 0; i < s1.length(); i++) {
            if(s1[i] != s2[i]) {
                return false;
            }
        }
        return true;
    }
    return false;
}

int main() {
    
    int cases;
    cin >> cases;
    
    int numbers;
    while(cases--) {
        cin >> numbers;
        
        vector< string > all (numbers);
        string num;
        for(int i = 0; i < numbers; i++) {
            cin >> all[i];
        }
        
        bool consistent = true;
        sort(all.begin(), all.end());
        for(int i = 0; i < all.size() - 1; i++) {
            if(check(all[i], all[i + 1])) {
                consistent = false;
                break;
            }
        }
        
        cout << (consistent ? "YES" : "NO") << endl;
    }
    
    return 0;
}

