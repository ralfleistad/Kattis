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
    
    unordered_map< char, string > map {
        {'a', "@"}, {'b', "8"}, {'c', "("},
        {'d', "|)"}, {'e', "3"}, {'f', "#"},
        {'g', "6"}, {'h', "[-]"}, {'i', "|"},
        {'j', "_|"}, {'k', "|<"}, {'l', "1"},
        {'m', "[]\\/[]"}, {'n', "[]\\[]"}, {'o', "0"},
        {'p', "|D"}, {'q', "(,)"}, {'r', "|Z"},
        {'s', "$"}, {'t', "']['"}, {'u', "|_|"},
        {'v', "\\/"}, {'w', "\\/\\/"}, {'x', "}{"},
        {'y', "`/"}, {'z', "2"}
    };
    
    string result, line;
    getline(cin, line);
    
    transform(line.begin(), line.end(), line.begin(), ::tolower);
    for(int i = 0; i < line.length(); i++) {
        char c = line[i];
        
        if(map.count(c) != 0) {
            result += map[c];
        }
        else {
            result += c;
        }
    }

    cout << result << endl;
    
    return 0;
}


