#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    int loop, count = 0;
    cin >> loop;
    
    for(int i = 0; i < loop; i++) {
        int temp = 0;
        cin >> temp;
        
        if(temp < 0) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}