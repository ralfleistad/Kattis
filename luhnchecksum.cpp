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
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    string num;
    for(int j = 0; j < n; j++) {
        cin >> num;
        
        int csum = 0, len = num.length();
        vector< char > digits;
        
        for(int i = 0; i < len; i++) {
            digits.push_back(num[i]);
        }
        
        for(int i = len - 2; i >= 0; i -= 2) {
            int digit = digits[i] - '0';
            digit *= 2;
            
            if(digit > 9) {
                int tens = (digit / 10) % 10;
                int ones = digit % 10;
                digit = tens + ones;
            }
            
            digits[i] = digit + '0';
        }
        
        for(int i = 0; i < len; i++) {
            csum += digits[i] - '0';
        }
            
        cout << (csum % 10 == 0 ? "PASS" : "FAIL") << endl;
    }
    
    
    return 0;
}


