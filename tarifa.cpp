#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int mb, n;
    cin >> mb >> n;
    
    int used, ans = mb;
    for(int i = 0; i < n; i++) {
        ans += mb;
        cin >> used;
        ans -= used;
    }
    
    cout << ans << endl;

    return 0;
}