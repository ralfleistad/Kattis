#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int n, w, h;
    cin >> n >> w >> h;
    
    int size = sqrt((w * w) + (h * h));
    int match;
    for(int i = 0; i < n; i++) {
        cin >> match;
        if(match > size) {
            cout << "NE" << endl;
        }
        else {
            cout << "DA" << endl;
        }
    }

    return 0;
}