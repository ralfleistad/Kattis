#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    
    
    int n, num;
    cin >> n;
    
    long count = 0;
    set< int > seen;
    vector< int > tree (n + 2, 0);
    
    for(int i = 0; i < n; i++) {
        cin >> num;
        
        seen.insert(num);
        auto itr1 = seen.find(num);
        auto itr2 = seen.find(num);
        
        int temp = 0;
        if(itr1 != seen.begin()) {
            itr1--;
            temp = max(tree[*itr1], temp);
        }
        
        if(itr2 != seen.end()) {
            itr2++;
            if(itr2 != seen.end()) {
                temp = max(tree[*itr2], temp);
            }
        }
        
        count += temp;
        tree[num] = temp + 1;

        cout << count << endl;
    }
    
    return 0;
}