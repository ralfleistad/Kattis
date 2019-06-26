#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main () {
    int amount, price;
    vector<int> books;

    cin >> amount;
    for(int i = 0; i < amount; i++) { cin >> price; books.push_back(price); }
    
    sort(books.begin(), books.end());
    
    int total = 0;
    for(int i = books.size() - 1; i >= 0; i -= 3) { total = total + books[i] + books[i - 1]; }
    cout << total << endl;

  return 0;
}