#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <bitset>
#include <climits>
#include <queue>
#include <cstring>
#include <map>
#include <sstream>
using namespace std;

int main() {
    
    int n;
    string line;
    unordered_map< string, int > votes;
    unordered_map< string, string> parties;
    
    getline(cin, line);
    n = stoi(line);
    
    string cand, part;
    for(int i = 0; i < n; i++) {
        getline(cin, cand);
        getline(cin, part);
        parties.insert( {cand, part} );
        votes.insert( {cand, 0} );
    }
    
    getline(cin, line);
    n = stoi(line);
    
    int max = 0;
    string winner = "";
    bool tie = false;
    for(int i = 0; i < n; i++) {
        getline(cin, cand);
        votes[cand]++;
        
        if(votes[cand] > max) {
            max = votes[cand];
            winner = cand;
            tie = false;
        }
        else if(votes[cand] == max) {
            tie = true;
        }
    }
    
    cout << (tie ? "tie" : parties[winner]) << endl;
    
    return 0;
}


