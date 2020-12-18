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

double fact(double a) {
    if(a == 0 || a == 1) {
        return 1;
    }
    return a * fact(a - 1);
}

int main() {
    
    int n;
    cin >> n;
    
    double sum = 0;
    for(double i = 0; i < n + 1; i++) {
        sum += 1 / fact(i);
    }
    
    cout << fixed << setprecision(15) << sum << endl;
    
    return 0;
}

