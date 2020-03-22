#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    
    int n, time;
    cin >> n >> time;
    
    int temp = 0, count = 0;
    for(int i = 0; i < n; i++) {
        int task;
        cin >> task;
        
        temp += task;
        if(temp > time) {
            break;
        }
        
        count++;
    }
    
    cout << count << endl;
    
    return 0;
}

