#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string word;
    int loop;
    
    cin >> loop;
    for(int i = 0; i < loop; i++) {
        cin >> word;
        int square = sqrt(word.length());
        int pos = square;
        int length = word.length();
        int temp = 1;

        while(length--) {
            if(pos > word.length()) {
                pos = square - temp;
                temp++;
            }
            
            cout << word[pos - 1];
            pos += square;
        }
        cout << endl;
    }
    

    return 0;
}