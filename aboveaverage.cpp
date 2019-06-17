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
using namespace std;

int main() {
    
    int n, nums;
    
    cin >> n;
    while(n--) {
        cin >> nums;
        vector< int > vec (nums);
        
        double sum = 0;
        for(int i = 0; i < nums; i++) {
            cin >> vec[i];
            sum += vec[i];
        }
        
        double avg = sum / nums;
        int above = 0;
        
        for(int i = 0; i < nums; i++) {
            if(vec[i] > avg) {
                above++;
            }
        }
        
        cout << fixed << setprecision(3) << (((double)above / (double)nums)) * 100 << "%" << endl;
    }
    
    return 0;
}


