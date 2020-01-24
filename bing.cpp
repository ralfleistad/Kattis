#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const int ALPHABET = 26;

struct Node {
    vector< Node* > letters;
    bool leaf;
    int words = 0;

    public:
    Node() {
        letters = vector< Node* > (ALPHABET, nullptr);
    }
};

int insert(Node* node, string word) {
    
    int index = word[0] - 'a';
    word.erase(0, 1);
    
    if(!node->letters[index]) {
        node->letters[index] = new Node;
    }
    
    int count = node->letters[index]->words;
    node->letters[index]->words++;
    
    if(word.length() == 0) {
        return count;
    }
    
    return insert(node->letters[index], word);
}

int main() {
    
    int loop;
    string word;
    Node* root = new Node;
    
    cin >> loop;
    for(int i = 0; i < loop; i++) {
        cin >> word;
        
        int res = insert(root, word);
        cout << res << endl;
    }

    return 0;
}