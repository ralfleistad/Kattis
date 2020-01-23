#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    
    unordered_map< string, int > list;
    string name;
    
    while(getline(cin, name)) {
        list[name]++;
    }
    
    string winner = "";
    int max = 0;
    
    for(auto n : list) {
        if(n.second > max) {
            winner = n.first;
            max = n.second;
        }
    }
    
    for(auto n : list) {
        if(n.second == max && n.first != winner) {
            cout << "Runoff!" << endl;
            return 0;
        }
    }
    
    cout << winner << endl;
    
    return 0;
}

