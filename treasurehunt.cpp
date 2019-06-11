#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int r, c;
    int moves = 0;
    char dir;
    vector< vector<char> > vec;
    
    cin >> r;
    cin >> c;
    vec.resize(r);
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> dir;
            vec[i].push_back(dir);
        }
    }
    
    int row = 0;
    int column = 0;
    while(true) {
        
        if(row < 0 || column < 0 || row >= r || column >= c) {
            cout << "Out";
            return 0;
        }
        
        else if(moves > r*c) {
            cout << "Lost";
            return 0;
        }
        
        switch(vec[row][column]) {
            case 'N':
                row--;
            break;
                
            case 'S':
                row++;
            break;
                
            case 'W':
                column--;
            break;
                
            case 'E':
                column++;
            break;
                
            case 'T':
                cout << moves << endl;
                return 0;
            break;
                
            default:
                cout << "default...";
                return 0;
            break;
        }
        moves++;
    }
    
    return 0;
}