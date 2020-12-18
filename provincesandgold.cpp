#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    
    int gold, silver, copper, bp;
    cin >> gold >> silver >> copper;
    
    bp = (gold * 3) + (silver * 2) + copper;
    
    string v, t;
    if(bp > 7) {
        v = "Province";
    } else if(bp > 4) {
        v = "Duchy";
    } else if(bp > 1) {
        v = "Estate";
    }
    
    if(bp > 5) {
        t = "Gold";
    } else if(bp > 2) {
        t = "Silver";
    } else {
        t = "Copper";
    }
    
    if(v == "") {
        cout << t << endl;
    } else {
        cout << v << " or " << t << endl;
    }
    
    return 0;
}

