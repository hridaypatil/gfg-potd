## GFG Problem Of The Day

### Today - 12 February 2024
### Que - Recursive sequence

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/recursive-sequence1611/1)

### My Approach

This question is straightforward. Simply follow the steps asked by the question. I used two loops to compute the partial factorial, then combined sequence using modular arithmetic.

### Time and Auxiliary Space Complexity

- **Time Complexity**: `(O(n^2))` - The nested loops iterate through each integer up to n, and within each iteration, there is a calculation of the factorial which takes `(O(n))` time.
- **Auxiliary Space Complexity**: `(O(1))` - Only a few variables are used for calculations, independent of the input size.

### Code (C++)

```cpp
class Solution {
public:
    long long sequence(int n){
        long long mod = 1e9 + 7;
        long long out = 0, c = 1;
        for(int i = 1; i <= n; ++i){
            long long temp = 1;
            for(int j = 0; j < i ; ++j){
                temp *= c++;
                temp %= mod;
            }
            out = (out + temp) % mod;
        }
        return out;
    }
};
```

### Contribution and Support

I always encourage contributors to participate in the discussion forum for this repository.

If you find this solution helpful, consider supporting us by giving a `⭐ star`.
