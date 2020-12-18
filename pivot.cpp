#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    vector<int> nums;
    int loop, num, max;
    
    cin >> loop;
    cin >> max;
    nums.push_back(max);
    
    for(int i = 1; i < loop; i++) {
        cin >> num;
        
        if(num >= max) {
            nums.push_back(num);
            max = num;
        }
        else {
            auto itr = nums.begin();
            
            while(itr != nums.end()) {
                if(*itr > num) {
                    itr = nums.erase(itr);
                }
                else {
                    ++itr;
                }
            }
        }
    }
    
    cout << nums.size() << endl;

    return 0;
}