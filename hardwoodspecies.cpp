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
#include <set>
using namespace std;

int main() {
    
    double total = 0;
    map< string, int > trees;
    string tree;
    
    while(getline(cin, tree)) {
        trees[tree] += 1;
        total += 1;
    }
    
    for(auto el : trees) {
        cout << el.first << " " << double((el.second / total) * 100) << endl;
    }
    
    return 0;
}

