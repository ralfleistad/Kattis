#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;

int main() {
    
    int min, correct = 0, time = 0;
    char prob;
    string result;
    unordered_map < char, int > map;
    
    while(true) {
        cin >> min;
        
        if(min == -1) {
            break;
        }
        
        cin >> prob >> result;
        
        if(result == "wrong") {
            map[prob] += 20;
        }
        else {
            map[prob] += min;
            time += map[prob];
            correct++;
        }
    }
    
    cout << correct << " " << time << endl;
    
    return 0;
}