#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    
    int numbers;
    
    int max, min, num, casenum = 1;
    while(cin >> numbers) {
        
        cin >> num;
        max = num;
        min = num;
        for(int i = 0; i < numbers - 1; i++) {
            cin >> num;
            
            if(num < min) {
                min = num;
            }
            
            if(num > max) {
                max = num;
            }
        }
        
        cout << "Case " << casenum << ": " << min << " " << max << " " << max - min << endl;
        casenum++;
        
    }
    
    return 0;
}

