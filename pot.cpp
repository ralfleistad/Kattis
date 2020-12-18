#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    
    int n, num;
    cin >> n;
    
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> num;
        sum += pow(num / 10, num % 10);
    }
    
    cout << sum << endl;
    
    return 0;
}