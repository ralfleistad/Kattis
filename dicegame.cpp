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
    
    int g1, g2, g3, g4;
    cin >> g1 >> g2 >> g3 >> g4;
    int sum_g = (g1 + g2 + g3 + g4);
    
    int e1, e2, e3, e4;
    cin >> e1 >> e2 >> e3 >> e4;
    int sum_e = (e1 + e2 + e3 + e4);
    
    if(sum_g == sum_e) {
        cout << "Tie" << endl;
    }
    else if(sum_g > sum_e) {
        cout << "Gunnar" << endl;
    }
    else {
        cout << "Emma" << endl;
    }
    
    return 0;
}


