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
    
    unordered_set< int > used;
    int rooms, booked, room;
    cin >> rooms >> booked;
    
    for(int i = 0; i < booked; i++) {
        cin >> room;
        used.insert(room);
    }
    
    for(int i = 1; i <= rooms; i++) {
        if(used.count(i) == 0) {
            cout << i << endl;
            return 0;
        }
    }
    
    cout << "too late" << endl;
    
    return 0;
}


