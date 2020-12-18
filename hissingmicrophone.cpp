#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    string word;
    cin >> word;
    
    for(int i = 0; i < word.length() - 1; i++) {
        if(word[i] == 's' && word[i + 1] == 's') {
            cout << "hiss" << endl;
            return 0;
        }
    }
    
    cout << "no hiss" << endl;
    
    return 0;
}