#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <string>
#include <bitset>
#include <climits>
#include <queue>
#include <cstring>
using namespace std;

struct Person {
    int cash;
    int leave;
};

bool CMP(const Person a, const Person b) {
    return a.cash >= b.cash;
}

void enqueue(vector<int> &vec, Person p) {
    int time = p.leave;
    
    while(time >= 0) {
        if(vec[time] == 0) {
            vec[time] = p.cash;
            return;
        }
        time--;
    }
}

int main() {
    
    int n, t;
    cin >> n >> t;
    
    vector< int > queue (t, 0);
    vector< Person > line;
    
    for(int i = 0; i < n; i++) {
        Person p;
        cin >> p.cash;
        cin >> p.leave;
        line.push_back(p);
    }
    
    sort(line.begin(), line.end(), CMP);
    
    for(int i = 0; i < line.size(); i++) {
        enqueue(queue, line[i]);
    }

    int total = 0;
    for(int i = 0; i < queue.size(); i++) {
        total += queue[i];
    }
    
    cout << total << endl;

    return 0;
}