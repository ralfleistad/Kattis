#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    string input;
    cin >> input;
    
    int ball = 1;
    for(int i = 0; i < input.length(); i++) {
        
        switch(input[i]) {
                
            case 'A':
                if(ball == 1) {
                    ball = 2;
                }
                else if(ball == 2) {
                    ball = 1;
                }
            break;
                
            case 'B':
                if(ball == 2) {
                    ball = 3;
                }
                else if(ball == 3) {
                    ball = 2;
                }
            break;
                
            case 'C':
                if(ball == 1) {
                    ball = 3;
                }
                else if(ball == 3) {
                    ball = 1;
                }
            break;
        }
        
    }
    
    cout << ball << endl;

    return 0;
}