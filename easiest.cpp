#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <bitset>
#include <climits>
#include <queue>
#include <cstring>
#include <map>
#include <sstream>
using namespace std;

int findSum(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    
    int n;
    while(cin >> n) {
        if(n == 0) {
            break;
        }
        
        int sum = findSum(n);
        int p = 11;
        while(findSum(p * n) != sum) {
            p++;
        }
        cout << p << endl;
    }
    
    return 0;
}


