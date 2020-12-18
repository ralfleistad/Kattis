#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> vec);

int main() {
    
    vector<int> nums;
    int number;
    
    for(int i = 0; i < 5; i++) {
        cin >> number;
        nums.push_back(number);
    }
    
    for(int i = 0; i < nums.size() - 1; i++) {
        for(int j = 0; j < nums.size() - i - 1; j++) {
            if(nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                print(nums);
            }
        }
    }
    
    return 0;
}

void print(vector<int> vec) {
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}