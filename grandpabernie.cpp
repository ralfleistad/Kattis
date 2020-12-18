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
    
    unordered_map< string, vector<int> > trips;
    unordered_map< string, vector<int> >::iterator it;
    string country;
    int year;
    int n;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> country >> year;
        trips[country].push_back(year);
    }
    
    for(it = trips.begin(); it != trips.end(); it++){
        sort(it->second.begin(), it->second.end());
    }
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> country >> year;
        cout << trips[country][year - 1] << endl;
    }
    
    return 0;
}

