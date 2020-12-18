#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <string>
using namespace std;

string process(string &word) {
    string sub1, sub2;
    unordered_set< char > set {'a', 'e', 'i', 'o', 'u', 'y'};
    
    if(set.count(word[0]) != 0) {
        word += "yay";
        return word;
    }
    
    for(int i = 0; i < word.length(); i++) {
        if(set.count(word[i]) != 0) {
            sub1 = word.substr(0, i);
            sub2 = word.substr(i, word.length() - 1);
            word = sub2 + sub1 + "ay";
            break;
        }
    }
    return word;
}

int main() {
    
    string word, line;

    while(getline(cin, line)) {
        string temp;
        line += " ";
        for(int i = 0; i < line.length(); i++) {
            if(line[i] == ' ') {
                cout << process(temp) << " ";
                temp = "";
            }
            else {
                temp += line[i];
            }
        }
        cout << endl;
    }
    
    return 0;
}

