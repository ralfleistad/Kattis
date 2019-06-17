#include <iostream>
#include <string>
using namespace std;

int main() {
    string jon, doctor;
    cin >> jon;
    cin >> doctor;
    
    if(jon.compare(doctor) <= 0) {
        cout << "go";
    }
    else {
        cout << "no";
    }
    
    return 0;
}

