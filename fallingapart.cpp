#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    
    vector< int > vec;
    
    int pieces;
    cin >> pieces;
    
    int alice = 0, bob = 0, piece;
    for(int i = 0; i < pieces; i++) {
        cin >> piece;
        vec.push_back(piece);
    }
    
    sort(vec.begin(), vec.end());
    
    for(int i = vec.size() - 1; i >= 0; i -= 2) {
        alice += vec[i];
        bob += vec[i - 1];
    }
    
    cout << alice << " " << bob;
    
    return 0;
}

