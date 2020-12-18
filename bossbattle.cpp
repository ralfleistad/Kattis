#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    
    int bombs;
    cin >> bombs;
    cout << (bombs >> 2 ? bombs - 2 : 1 ) << endl;
    
    return 0;
}

