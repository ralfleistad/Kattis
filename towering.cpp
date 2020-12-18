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
using namespace std;

int main() {
    
    vector< int > boxes (6);
    vector< int > index (6);
    for(int i = 0; i < 6; i++) {
        cin >> boxes[i];
    }
    
    int tower1, tower2;
    cin >> tower1 >> tower2;
    
    
    int found = 0;
    sort(boxes.begin(), boxes.end(), greater<int>());

    for(int i = 0; i < boxes.size(); i++) {
        for(int j = i + 1; j < boxes.size(); j++) {
            for(int k = j + 1; k < boxes.size(); k++) {
                int sum = boxes[i] + boxes[j] + boxes[k];
                if(sum == tower1) {
                    found++;
                    index[0] = i;
                    index[1] = j;
                    index[2] = k;
                }
                else if(sum == tower2) {
                    found++;
                    index[3] = i;
                    index[4] = j;
                    index[5] = k;
                }
                
                if(found == 2) {
                    cout << boxes[index[0]] << " " << boxes[index[1]] << " " << boxes[index[2]] << " ";
                    cout << boxes[index[3]] << " " << boxes[index[4]] << " " << boxes[index[5]] << endl;
                    return 0;
                }
            }
        }
    }    
    
    return 0;
}


