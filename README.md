## GFG Problem Of The Day

### Today - 16 February 2024
### Que - Flatten BST to sorted list
The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/flatten-bst-to-sorted-list--111950/1)

### My Approach
To flatten a BST into a sorted list, we can perform an in-order traversal of the BST. During the traversal, we keep track of the previous and next nodes to adjust the pointers accordingly. The steps are as follows:
- Initialize `head` and `tail` pointers as `NULL`.
- Perform in-order traversal of the BST.
- While traversing, adjust the pointers of the nodes to form a linked list.
- Finally, return the head of the linked list.

### Time and Auxiliary Space Complexity

- **Time Complexity**: The time complexity of the in-order traversal is `O(n)`, where n is the number of nodes in the BST.
- **Auxiliary Space Complexity**: The space complexity is `O(h)`, where h is the height of the BST.

### Code (C++)

```cpp
class Solution
{
public:
    Node *flattenBST(Node *root)
    {
        function<pair<Node*, Node*> (Node *, Node *, bool)> dfs = [&](Node * node, Node * prev, bool isLeft) -> pair<Node*, Node*> {
            if(!node)
                return {nullptr, nullptr};
                
            pair<Node *, Node *> left = dfs(node -> left, node, 1);
            pair<Node *, Node *> right = dfs(node -> right, node, 0);
                
            node -> left = left.first;
            node -> right = right.first;
            
            Node * MIN = left.first ? left.first : node;
            Node * MAX = right.second ? right.second : node;
            
            if(isLeft)
                MAX -> right = prev;
            
            node -> left = nullptr;
            return {MIN, MAX};
        };
        
        return dfs(root, nullptr, 0).first;
    }
};

```

### Contribution and Support

I always encourage contributors to participate in the discussion forum for this repository.

If you find this solution helpful, consider supporting us by giving a `⭐ star`.
