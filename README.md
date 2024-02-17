## GFG Problem Of The Day

### Today - 17 February 2024
### Que - Does array represent Heap
The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/does-array-represent-heap4345/1)

### My Approach
- We iterate through each non-leaf node of the binary tree represented by the array.
- For each node, we check if it violates the heap property. If it does, we return false.
- If we reach the end of the loop without finding any violations, we return true.

### Time and Auxiliary Space Complexity

- **Time Complexity** : O(n), where n is the number of elements in the array. We iterate through each non-leaf node once.
- **Auxiliary Space Complexity** : O(1), no extra space is used.

### Code (C++)
```cpp
class Solution {
public:
    bool isMaxHeap(int arr[], int n)
    {
        int st = n / 2;
        for(int i = st; i >= 0; --i){
            if((i*2 + 1 < n && arr[i] < arr[i*2 + 1]) || (i*2 + 2 < n) && arr[i] < arr[i*2 + 2])
                return false;
        }
        return true;
    }
};
```

### Contribution and Support

I always encourage contributors to participate in the discussion forum for this repository.

If you find this solution helpful, consider supporting us by giving a `⭐ star`.
