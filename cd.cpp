#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    
    unordered_set< int > jack;
    
    int cdJack, cdJill;
    
    while(true) {
        cin >> cdJack >> cdJill;
        
        if(cdJack == 0 && cdJill == 0) {
            break;
        }
        
        int category;
        
        for(int i = 0; i < cdJack; i++) {
            cin >> category;
            jack.insert(category);
        }
        
        int sellable = 0;
        for(int i = 0; i < cdJill; i++) {
            cin >> category;
            if(jack.count(category) != 0) {
                sellable++;
            }
        }

        cout << sellable << endl;
        jack.clear();
    }
    
    
    return 0;
}

