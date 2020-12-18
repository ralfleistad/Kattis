#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int ans = pow(2, n) - n - 1;
    cout << ans << endl;

    return 0;
}