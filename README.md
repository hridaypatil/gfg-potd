## GFG Problem Of The Day

### Today - 16 March 2024
### Que - Delete without head pointer
The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/delete-without-head-pointer/1)

### My Approach
To solve this question I simply copy the data of the next node to the current node to be deleted. 
- Then, I update the next pointer of the current node to skip the next node and directly point to the node after it. 
- Finally, free the memory allocated for the next node.

### Time and Auxiliary Space Complexity

- **Time Complexity** : `O(1)` - Since we are only performing a constant number of operations irrespective of the size of the linked list.
- **Auxiliary Space Complexity** : `O(1)` - No extra space is used other than a few pointers regardless of the input size.

### Code (C++)
```cpp
class Solution {
public:
    void deleteNode(Node *del_node) {
        Node* next_node = del_node->next;
        del_node->data = next_node->data;
        del_node->next = next_node->next;
        free(next_node);
    }
};
```

### Contribution and Support

I always encourage contributors to participate in the discussion forum for this repository.

If you find this solution helpful, consider supporting us by giving a `⭐ star`.
