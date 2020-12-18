#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    
    int h, m;
    cin >> h >> m;
    
    m -= 45;
    
    if(m < 0) {
        m += 60;
        h--;
        
        if(h < 0) {
            h += 24;
        }
    }
    
    cout << h << " " << m << endl;
    
    return 0;
}