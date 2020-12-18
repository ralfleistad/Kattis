#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;
    
    int temp = a * b;
    int ans = (temp - a) + 1;
    
    cout << ans << endl;

    return 0;
}