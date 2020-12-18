#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    
    int w, p;
    cin >> w >> p;
    
    vector< int > partitions(p);
    vector< bool > width(w + 1);
    
    for(int i = 0; i < p; i++) {
        cin >> partitions[i];
        width[ partitions[i] ] = true;
        width[ w - partitions[i] ] = true;
    }
    
    for(int i = 0; i < p; i++) {
        for(int j = i + 1; j < p; j++) {
            width[ partitions[j] - partitions[i] ] = true;
        }
    }
    width[w] = true;
    
    for(int i = 0; i <= w; i++) {
        if(width[i]) {
            cout << i << " ";
        }
    }
    
    return 0;
}