#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int loop, cities, pilots;
    
    cin >> loop;
    for(int i = 0; i < loop; i++) {
        cin >> cities;
        cin >> pilots;
        
        int a, b;
        for(int j = 0; j < pilots; j++) {
            cin >> a;
            cin >> b;
        }
        
        cout << cities - 1 << endl;
    }
    

    return 0;
}