#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int compare(string curr, string next) {
    string currSub = curr.substr(0, 2);
    string nextSub = next.substr(0, 2);
    return currSub < nextSub;
}

int main() {
    vector<string> names;
    string line;
    int loop = 0;
    
    while(true) {
        if(loop != 0) {
            cout << endl;
        }
        
        cin >> loop;
        
        if(loop == 0) {
            break;
        }
        
        for(int i = 0; i < loop; i++) {
            cin >> line;
            names.push_back(line);
        }
        stable_sort(names.begin(), names.end(), compare);
        
        for(int i = 0; i < names.size(); i++) {
            cout << names[i] << endl;
        }
        
        names.clear();
    }
    
    return 0;
}