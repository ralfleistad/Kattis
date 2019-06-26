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
using namespace std;

int main() {
    
    long num;
    while(cin >> num) {
        
        if(num == 1) {
            cout << "Stan wins." << endl;
            continue;
        }
        
        int count = 0;
        while(num > 1) {
            count++;
            (count % 2 == 1 ? num = (num + 8) / 9 : num = (num + 1) / 2);
        }
        cout << (count % 2 == 1 ? "Stan" : "Ollie") << " wins." << endl;
    }
    
    return 0;
}


