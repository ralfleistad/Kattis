#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;


int main() {
    
    double price;
    cin >> price;
    
    int lawns;
    cin >> lawns;
    
    double w, h;
    double sum = 0;
    for(int i = 0; i < lawns; i++) {
        cin >> w >> h;
        sum += (w * h);
    }
    
    cout << fixed << setprecision(6) << sum * price << endl;
    
    return 0;
}

