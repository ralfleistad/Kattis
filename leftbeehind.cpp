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
#include <iterator>
using namespace std;

int main() {
    
    int sour, sweet;
    while(cin >> sour >> sweet) {
        if(sour == 0 && sweet == 0) {
            break;
        }
        
        if(sour + sweet == 13) {
            cout << "Never speak again." << endl;
        }
        else if(sour > sweet) {
            cout << "To the convention." << endl;
        }
        else if(sour < sweet) {
            cout << "Left beehind." << endl;
        }
        else {
            cout << "Undecided." << endl;
        }
    }
    
    return 0;
}


