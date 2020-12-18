#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int compare(string curr, string next) {
    /*
    int currLen = curr.length() - 2;
    int nextLen = next.length() - 2;
    string subCurr = curr.substr(currLen, 2);
    string subNext = next.substr(nextLen, 2);
    */
    
    if(curr.compare(next) < 0) {
        return -1;
    } else if(curr.compare(next) > 0) {
        return 1;
    } else {
        if(curr.length() > next.length()) {
            return 1;
        } else {
            return -1;
        }
    }
}

void dyslecticSort(vector<string> &vec) {
    // find max-length string & reverse strings for easier sort
    int max = 0;
    for(int i = 0; i < vec.size(); i++) {
        reverse(vec[i].begin(), vec[i].end());
        if(vec[i].length() > max) {
            max = vec[i].length();
        }
    }
    
    // sort with custom compare method
    for(int i = 1; i < vec.size(); i++) {
        string key = vec[i];
        int j = i - 1;
        
        while(j >= 0 && compare(vec[j], key) > 0) {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }
    
    // add padding to shorter strings & reverse back
    for(int i = 0; i < vec.size(); i++) {
        reverse(vec[i].begin(), vec[i].end());
        int padding = max - vec[i].length();
        string temp = "";
        for(int j = 0; j < padding; j++) {
            temp += " ";
        }
        vec[i] = temp + vec[i];
    }
    
    // print sub-list
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}

int main() {
    vector<string> words;
    string line;
    
    while(getline(cin, line)) {
        if(line == "") {
            dyslecticSort(words);
            cout << endl;
            words.clear();
        }
        else {
            words.push_back(line);
        }
    }
    dyslecticSort(words);
    
    return 0;
}