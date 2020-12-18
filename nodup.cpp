#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;


int main() {
    
    string word;
    unordered_set< string > set;
    
    bool repeat = false;
    while(cin >> word) {
        if(set.count(word) > 0) {
            repeat = true;
            break;
        }
        else {
            set.insert(word);
        }
    }
    
    cout << (repeat ? "no" : "yes") << endl;
    
    return 0;
}

