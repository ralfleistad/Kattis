#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <bitset>
#include <climits>
#include <queue>
#include <cstring>
#include <map>
#include <set>
using namespace std;

struct Node {
    int num;
    vector< Node* > neighbors;
    bool visited;
    
    Node(int n) {
        num = n;
        visited = false;
    }
};

void traverse(Node* source) {
    if(source->visited) {
        return;
    }
    
    source->visited = true;
    for(int i = 0; i < source->neighbors.size(); i++) {
        if(!source->neighbors[i]->visited) {
            traverse(source->neighbors[i]);
        }
    }
}

int main() {
    
    int houses, connected;
    cin >> houses >> connected;
    
    vector< Node* > nodes;
    for(int i = 1; i <= houses; i++) {
        nodes.push_back(new Node(i));
    }
    
    int a, b;
    for(int i = 0; i < connected; i++) {
        cin >> a >> b;
        Node* from = nodes[a - 1];
        Node* to = nodes[b - 1];
        
        from->neighbors.push_back(to);
        to->neighbors.push_back(from);
    }
    
    vector< Node* > unconnected;
    traverse(nodes[0]);
    
    for(int i = 0; i < nodes.size(); i++) {
        if(!nodes[i]->visited) {
            cout << nodes[i]->num << endl;
            unconnected.push_back(nodes[i]);
        }
    }
    
    if(unconnected.size() == 0) {
        cout << "Connected" << endl;
    }
    
    return 0;
}

