#include <cstdio>
#include <iostream>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int padding(string str, int keyLen) {
    int mod = str.length() % keyLen;
    
    if(mod == 0) {
        return 0;
    }
    
    return keyLen - mod;
}

int main() {
    
    int n, num;
    string line;
    vector< int > keys;
    
    while(true) {
        cin >> n;
        
        if(n == 0) {
            break;
        }
        
        for(int i = 0; i < n; i++) {
            cin >> num;
            keys.push_back(num);
        }
        
        getline(cin, line); // syncing standard in
        getline(cin, line);
        
        int pad = padding(line, n);
        string padding = line;
        padding.resize(line.length() + pad, ' ');
        
        string res = "'";
        for(int i = 0; i < padding.length() / n; i++) {
            for(int j = 0; j < n; j++) {
                res += padding[(i * n) + keys[j] - 1];
            }
        }
        res += "'";
        
        cout << res << endl;
        
        keys.clear();
    }

    return 0;
}