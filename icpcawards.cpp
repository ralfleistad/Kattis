#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    
    unordered_set< string > mySet;
    string uni, team;
    int n;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> uni;
        cin >> team;
        
        if(mySet.count(uni) == 0 && mySet.size() < 12) {
            mySet.insert(uni);
            cout << uni << " " << team << endl;
        }
    }
    
    return 0;
}

