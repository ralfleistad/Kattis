#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <bitset>
#include <climits>
#include <queue>
#include <cstring>
#include <map>
#include <set>
using namespace std;


int main() {
    
    vector< vector< char >> frame;
    int row, col;
    cin >> row >> col;
    
    for(int i = 0; i < row; i++) {
        vector< char > temp (col);
        char c;
        for(int j = 0; j < col; j++) {
            cin >> temp[j];
        }
        frame.push_back(temp);
    }
    
    int count = 0;
    for(int i = 0; i < col; i++) {
        bool complete = true;
        if(frame[0][i] == '_') {
            for(int j = 1; j < row; j++) {
                if(frame[j][i] == '$') {
                    complete = false;
                    break;
                }
            }
            if(complete) {
                count++;
            }
        }
    }
    
    cout << count + 1 << endl;
    
    return 0;
}

