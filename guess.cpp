#include <iostream>
#include <string>
using namespace std;

int main () {
    
    int max = 1000;
    int min = 1;
    int mid = 500;
    string input;
    
    cout << mid << endl;
    
    while(cin >> input) {
        if(input == "higher") {
            min = mid + 1;
        }
        else if(input == "lower") {
            max = mid - 1;
        }
        else {
            break;
        }
        mid = (max + min) / 2;
        cout << mid << endl;
        cout.flush();
    }
    
    return 0;
}