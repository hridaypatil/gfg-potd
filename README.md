## GFG Problem Of The Day

### Today - 04 March 2024
### Que - Swap the array elements
The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/need-some-change/1)

### My Approach
- Iterate through the array from index 0 to n - 2.
- Swap the elements at index i and i+2 using bitwise XOR.
- Repeat until the end of the array is reached.

### Time and Auxiliary Space Complexity

- **Time Complexity**: O(n), where n is the size of the array.
- **Auxiliary Space Complexity**: O(1), as no extra space is used.

### Code (C++)
```cpp
class Solution {
public:
    void swapElements(int arr[], int n) {
        for (int i = 0; i < n - 2; ++i) {
            arr[i] = arr[i] ^ arr[i + 2];
            arr[i + 2] = arr[i] ^ arr[i + 2];
            arr[i] = arr[i] ^ arr[i + 2];
        }
    }
};
```

### Contribution and Support

I always encourage contributors to participate in the discussion forum for this repository.

If you find this solution helpful, consider supporting us by giving a `⭐ star`.
