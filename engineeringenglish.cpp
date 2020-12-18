#include <cstdio>
#include <iostream>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    
    unordered_set< string > all;
    string input;
    
    while(cin >> input) {
        string str = input;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        if(all.count(str)) {
            cout << ". ";
        }
        else {
            cout << input << " ";
            all.insert(str);
        }
    }

    return 0;
}