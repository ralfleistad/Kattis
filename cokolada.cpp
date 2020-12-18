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
#include <iterator>
using namespace std;

int main() {
    
    int input;
    cin >> input;
    
    int bar = pow(2, ceil(log(input) / log(2)));
    pair< int, long > ans = make_pair(bar, 0);
    
    long sum = 0;
    while(sum < input) {
        if(bar + sum <= input) {
            sum += bar;
        } else {
            ans.second++;
            bar /= 2;
        }
    }
    
    cout << ans.first << " " << ans.second << endl;
    
    return 0;
}


