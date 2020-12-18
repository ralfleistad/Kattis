#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    
    int range, nums, count = 0;
    cin >> range >> nums;
    
    vector< bool > primes(range + 1, true);
    primes[0] = false;
    primes[1] = false;
    
    int sqr = sqrt(range);
    
    for(int i = 2; i <= sqr; i++) {
        if(primes[i]) {
            count++;
            for(int j = i * 2; j <= range; j += i) {
                primes[j] = false;
            }
        }
    }
    
    for(int i = sqr + 1; i <= range; i++) {
        if(primes[i]) {
            count++;
        }
    }
    
    cout << count << endl;
    for(int i = 0; i < nums; i++) {
        int q;
        cin >> q;
        cout << (primes[q] ? 1 : 0) << endl;
    }
    
    return 0;
}

