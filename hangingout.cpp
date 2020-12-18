#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    int limit, events;
    cin >> limit;
    cin >> events;
    
    int sum = 0;
    int people;
    string event;
    int result = 0;
    for(int i = 0; i < events; i++) {
        cin >> event;
        cin >> people;
        
        if(event == "enter") {
            if(sum + people > limit) {
                result++;
            }
            else {
                sum += people;
            }
        }
        else {
            sum -= people;
        }
    }
    
    cout << result << endl;
    
    return 0;
}