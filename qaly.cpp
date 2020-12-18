#include <cstdio>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    double qual, years, sum = 0.0;
    for(int i = 0; i < n; i++) {
        cin >> qual >> years;
        
        sum += qual * years;
    }
    
    cout << fixed << setprecision(3) << sum << endl;
    
    return 0;
}