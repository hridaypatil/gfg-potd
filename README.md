## GFG Problem Of The Day

### Today - 13 February 2024
### Que - Clone an Undirected Graph

The problem can be found at the following link: [Question Link]([https://www.geeksforgeeks.org/problems/recursive-sequence1611/1](https://www.geeksforgeeks.org/problems/clone-graph/1))

### My Approach

This question is straightforward. Simply follow the steps asked by the question. I used two loops to compute the partial factorial, then combined sequence using modular arithmetic.

### Time and Auxiliary Space Complexity

- **Time Complexity**: `(O(n^2))` - The nested loops iterate through each integer up to n, and within each iteration, there is a calculation of the factorial which takes `(O(n))` time.
- **Auxiliary Space Complexity**: `(O(1))` - Only a few variables are used for calculations, independent of the input size.

### Code (C++)

```cpp
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
```

### Contribution and Support

I always encourage contributors to participate in the discussion forum for this repository.

If you find this solution helpful, consider supporting us by giving a `⭐ star`.
