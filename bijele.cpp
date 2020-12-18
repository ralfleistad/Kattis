#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    vector< int > vec {1, 1, 2, 2, 2, 8};
    
    int num;
    for(int i = 0; i < vec.size(); i++) {
        cin >> num;
        cout << vec[i] - num << " ";
    }
    
    return 0;
}

