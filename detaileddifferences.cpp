#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

int main() {
    
    int n;
    string org, copy, diff;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> org >> copy;
        
        string diff;
        diff = copy;
        
        for(int j = 0; j < org.length(); j++) {
            if(copy[j] != org[j]) {
                diff[j] = '*';
            }
            else {
                diff[j] = '.';
            }
        }
        
        cout << org << endl << copy << endl << diff << endl << endl;
    }
    
    return 0;
}


