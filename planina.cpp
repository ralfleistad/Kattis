#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    int itr;
    cin >> itr;
    
    int res = pow(2, itr) + 1;
    res *= res;
    cout << res << endl;
    
    return 0;
}