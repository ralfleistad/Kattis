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
    
    int n;
    cin >> n;
    
    string first, second;
    cin >> first >> second;
    
    bool even = n % 2 == 0;
    
    if(even && first == second) {
        cout << "Deletion succeeded" << endl;
        return 0;
    }
    else if(even && first != second) {
        cout << "Deletion failed" << endl;
        return 0;
    }
    else {
        for(int i = 0; i < first.length(); i++) {
            if(first[i] == second[i]) {
                cout << "Deletion failed" << endl;
                return 0;
            }
        }
    }
    
    cout << "Deletion succeeded" << endl;
    
    return 0;
}


