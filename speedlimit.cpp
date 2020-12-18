#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    
    while(true) {
        int n;
        cin >> n;
        
        if(n == -1) {
            break;
        }
        
        int limit = 0, time = 0, total = 0, driven = 0;
        for(int i = 0; i < n; i++) {
            cin >> limit >> time;
            
            total += (time - driven) * limit;
            driven = time;
        }
        
        cout << total << " miles" << endl;
    }
    
    return 0;
}