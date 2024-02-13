class Solution { 

   unordered_map<Node*, Node*> vis;

public:

  Node* cloneGraph(Node* node) {

     if(!node) return NULL;

        if(vis.find(node) != vis.end())

                return vis[node];       

       Node*nn = new Node(node->val);

                  vis[node] = nn;  

    for(Node*x : node->neighbors)

nn->neighbors.push_back(cloneGraph(x));

            return nn;

    }

};
