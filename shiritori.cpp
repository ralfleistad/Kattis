#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    
    unordered_set<string> words;
    string word, prev;
    int loop, player;
    bool fair = true;
    
    cin >> loop;
    cin >> prev;
    
    words.insert(prev);
    int i;
    for(i = 2; i <= loop; i++) {
        cin >> word;
        
        if(words.count(word) == 1 || word[0] != prev[prev.length() - 1]) {
            fair = false;
            break;
        }
        
        words.insert(word);
        prev = word;
    }
    
    int loser = (i % 2);
    if(fair) {
        cout << "Fair Game" << endl;
    }
    else if(loser == 0) {
        cout << "Player 2 lost" << endl;
    }
    else {
        cout << "Player 1 lost" << endl;
    }
    
    return 0;
}


