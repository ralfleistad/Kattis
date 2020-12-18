#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    vector< string > vec;
    string line = "";
    int result = 0;
    
    while(getline(cin, line)) {
        vec.push_back(line);
    }
    
    int max = vec[0].length();
    int index = 0;
    for(int i = 1; i < vec.size(); i++) {
        if(vec[i].length() > max) {
            max = vec[i].length();
            index = i;
        }
    }
    
    for(int i = 0; i < vec.size() - 1; i++) {
        if(i != index) {
            int curr = vec[i].length();
            result += pow((max - curr), 2);
        }
    }
    
    cout << result << endl;
    
    return 0;
}

