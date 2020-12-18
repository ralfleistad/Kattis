#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;


int main() {
    
    string word;
    cin >> word;
    
    int count = 0;
    for(int i = 0; i < word.length(); i++) {
        if(i % 3 == 0 && word[i] != 'P') {
            count++;
        }
        
        if(i % 3 == 1 && word[i] != 'E') {
            count++;
        }
        
        if(i % 3 == 2 && word[i] != 'R') {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}

