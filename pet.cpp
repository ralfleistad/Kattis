#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

int main() {
    
    int one, two, three, four;
    int total = 0;
    int winner = 0;
    
    for(int i = 0; i < 5; i++) {
        cin >> one;
        cin >> two;
        cin >> three;
        cin >> four;
        
        int temp = one + two + three + four;
        
        if(temp > total) {
            total = temp;
            winner = i + 1;
        }
    }
    
    cout << winner << " " << total << endl;

    return 0;
}

