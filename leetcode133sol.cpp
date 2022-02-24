/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node* , Node*> mp;
    Node* cloneGraph(Node* node) {
        if (node == NULL){
            return nullptr;
        }
        if(mp.find(node) == mp.end()) //it is not present on our map
        {
            mp[node] = new Node(node->val);
            
            for(auto x : node->neighbors){cloneGraph
               mp[node]->neighbors.push_back((x)); 
            }
        }
        
        return mp[node];
    }
};