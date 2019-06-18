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
using namespace std;

unordered_map< string, int > words;
unordered_map< int, string > values;

void def() {
    int val = 0;
    string var = "";
    cin >> var >> val;

    if(words.count(var) != 0) {
        int temp = words[var];
        words.erase(var);
        values.erase(temp);
    }
    
    words[var] = val;
    values[val] = var;
}

void calc() {
    string var = "";
    string ans = "";
    string res = "";
    int sum = 0;
    bool valid = true;
    vector< string > vec;
    
    while(cin >> var) {
        vec.push_back(var);
        
        res += var + " ";
        bool plus = (var == "+");
        bool minus = (var == "-");
        
        if(var == "=") {
            break;
        }
        else if(!plus && !minus && words.count(var) == 0) {
            valid = false;
            ans = "unknown";
        }
    }
    
    if(valid) {
        sum = words[vec[0]];
        for(int i = 1; i < vec.size() - 1; i += 2) {
            if(vec[i] == "+") {
                sum += words[ vec[i + 1] ];
            }
            
            if(vec[i] == "-") {
                sum -= words[ vec[i + 1] ];
            }
        }
        
        if(values.count(sum) != 0) {
            ans = values[sum];
        }
        else {
            ans = "unknown";
        }
    }
    
    cout << res << ans << endl;
}

int main() {
    
    string input;
    
    while(cin >> input) {
        
        if(input == "clear") { words.clear(); values.clear(); }
        
        if(input == "def") { def(); }
        
        if(input == "calc") { calc(); }
    }
    
    return 0;
}

