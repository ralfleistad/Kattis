#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main() {
    
    double inp;
    cin >> inp;
    
    int res = 1000 * (5280.0 / 4854.0) * inp + 0.5;
    
    cout << res << endl;
    
    return 0;
}


