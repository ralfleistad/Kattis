#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    vector<int> vec;
    string abc;
    
    for(int i = 0; i < 3; i++) {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    
    sort(vec.begin(), vec.end());
    
    cin >> abc;
    for(int i = 0; i < 3; i++) {
        if(abc[i] == 'A') { cout << vec[0]; }
        else if(abc[i] == 'B') { cout << vec[1]; }
        else { cout << vec[2]; }
        cout << " ";
    }
    

    return 0;
}