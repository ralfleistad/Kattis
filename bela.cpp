#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <bitset>
#include <climits>
#include <queue>
#include <cstring>
#include <map>
#include <set>
using namespace std;


int main() {
    
    unordered_map< char, pair< int, int >> deck = {
        {'A',{11, 11}}, {'K',{4, 4}},   {'Q',{3, 3}},
        {'J',{20, 2}},  {'T',{10, 10}}, {'9',{14, 0}},
        {'8',{0, 0}},   {'7',{0, 0}}
    };
    
    char trump;
    int hands;
    cin >> hands >> trump;
    
    int total = 0;
    char num, suit;
    for(int i = 0; i < hands * 4; i++) {
        cin >> num >> suit;
        if(suit == trump) {
            total += deck[num].first;
        } else {
            total += deck[num].second;
        }
    }
    
    cout << total << endl;
    
    return 0;
}

