#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node {
    int data;
    vector<Node*> neighbors;
    bool visited;
    
    Node(int d) {
        data = d;
    }
};

Node* getNode(vector<Node*> vec, int d) {
    for(int i = 0; i < vec.size(); i++) {
        if(vec[i]->data == d) {
            return vec[i];
        }
    }
    return nullptr;
}

void traverse(Node* node) {
    if(node->visited) {
        return;
    }
    
    node->visited = true;
    for(int i = 0; i < node->neighbors.size(); i++) {
        if(!node->neighbors[i]->visited) {
            traverse(node->neighbors[i]);
        }
    }
}

int main()
{
    
    int cities;
    cin >> cities;
    
    while(cities--) {
        int endpoints, pairs;
        cin >> endpoints >> pairs;
        
        vector< Node* > nodes;
        
        for(int i = 0; i < endpoints; i++) {
            Node* curr = new Node(i);
            curr->visited = false;
            nodes.push_back(curr);
        }
        
        int f, t;
        for(int i = 0; i < pairs; i++) {
            cin >> f >> t;
            Node* from = getNode(nodes, f);
            Node* to = getNode(nodes, t);
            
            from->neighbors.push_back(to);
            to->neighbors.push_back(from);
        }
        
        int counter = 0;
        for(int i = 0; i < nodes.size(); i++) {
            if(!nodes[i]->visited) {
                counter++;
                traverse(nodes[i]);
            }
        }
        
        cout << counter - 1 << endl;
    }
    
    return 0;
}

