#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    
    int lines;
    cin >> lines;
    
    string line;
    getline(cin, line);
    for(int i = 0; i < lines; i++) {
        getline(cin, line);
        
        if(line.length() > 10 && line.substr(0, 10).compare("simon says") == 0) {
            string out = line.substr(11, line.length());
            cout << out;
        }
        cout << endl;
    }

    return 0;
}