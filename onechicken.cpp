#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    
    int people, chicken;
    cin >> people >> chicken;
    
    int ans = chicken - people;
    
    if(ans == 1) {
        cout << "Dr. Chaz will have " << ans << " piece of chicken left over!";
    }
    else if(ans > 0) {
        cout << "Dr. Chaz will have " << ans << " pieces of chicken left over!";
    }
    else if(people - chicken == 1) {
        cout << "Dr. Chaz needs " << people - chicken << " more piece of chicken!";
    }
    else {
        cout << "Dr. Chaz needs " << people - chicken << " more pieces of chicken!";
    }
    
    return 0;
}

