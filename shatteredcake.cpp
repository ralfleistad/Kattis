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
#include <set>
using namespace std;

int main() {
    
    int width, pieces;
    cin >> width >> pieces;
    
    int a = 0, w, l;
    for(int i = 0; i < pieces; i++) {
        cin >> w >> l;
        a += w * l;
    }
    
    cout << a / width << endl;
    
    return 0;
}

