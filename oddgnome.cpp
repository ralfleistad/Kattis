#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <bitset>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int amount, gnome, prev;
    while(n--) {
        cin >> amount;
        
        vector< int > vec (amount);
        for(int i = 0; i < amount; i++) {
            cin >> vec[i];
        }
        
        int king = 0;
        for(int i = 1; i < amount - 1; i++) {
            
            int prev = vec[i - 1];
            int curr = vec[i];
            
            if(curr - 1 != prev) {
                king = i + 1;
                break;
            }
        }
        
        cout << king << endl;
    }
    
    return 0;
}

