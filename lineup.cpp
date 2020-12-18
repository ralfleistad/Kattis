#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    
    int amount;
    string name;
    vector<string> names;
    
    cin >> amount;
    
    for(int i = 0; i < amount; i++) {
        cin >> name;
        names.push_back(name);
    }
    
    bool asc = true;
    bool desc = true;
    for(int i = 0; i < names.size() - 1; i++) {
        if(names[i].compare(names[i + 1]) < 0) {
            desc = false;
        }
        else if(names[i].compare(names[i + 1]) > 0) {
            asc = false;
        }
    }
    
    if(!asc && !desc) {
        cout << "NEITHER" << endl;
    }
    else if(asc) {
        cout << "INCREASING" << endl;
    }
    else {
        cout << "DECREASING" << endl;
    }
    
    
    return 0;
}