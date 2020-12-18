#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n, num;
    
    cin >> n;
    
    int min = -1;
    int idx = -1;
    for(int i = 0; i < n; i++) {
        cin >> num;
        if(num < min || min == -1) {
            min = num;
            idx = i;
        }
    }
    
    cout << idx << endl;
    
    return 0;
}

