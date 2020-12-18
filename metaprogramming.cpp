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

unordered_map< string, int > def;

void define() {
    int val;
    string var;
    cin >> val >> var;
    
    def[var] = val;
}

string eval() {
    string left, right, ans = "undefined";
    char opr;
    cin >> left >> opr >> right;
    
    bool result = false;
    if(def.count(left) != 0 && def.count(right) != 0) {
        if(opr == '<') {
            result = def[left] < def[right];
        }
        else if(opr == '>') {
            result = def[left] > def[right];
        }
        else {
            result = def[left] == def[right];
        }
        ans = (result ? "true" : "false");
    }
    
    return ans;
}

int main() {
    
    string command;
    while(cin >> command) {
        
        if(command == "define") { define(); }
        if(command == "eval") { cout << eval() << endl; }
        
    }
    
    return 0;
}


