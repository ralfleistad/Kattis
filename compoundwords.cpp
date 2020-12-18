#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main() {
    
    vector< string > words;
    set< string > combo;
    
    string input;
    while(cin >> input) {
        words.push_back(input);
    }
    
    for(int i = 0; i < words.size(); i++) {
        for(int j = 0; j < words.size(); j++) {
            if(i != j) {
                string temp = words[i] + words[j];
                
                if(combo.count(temp) == 0) {
                    combo.insert(temp);
                }
            }
        }
    }
    
    for(auto n : combo) {
        cout << n << endl;
    }

    return 0;
}