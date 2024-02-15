## GFG Problem Of The Day

### Today - 15 February 2024
### Que - Count all Possible Path
The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/castle-run3644/1)

### My Approach
Check for the existence of an Eulerian cycle in the graph. 
- If every node in the graph has an even degree, it implies the existence of an Eulerian cycle. To determine this, sum the elements in each vector in the input `paths`. 
- If any vector accumulate an odd sum, the function returns `false`, indicating the absence of an Eulerian cycle.

##### Note:
To understand the Euler circuit please [refer to this](https://www.youtube.com/watch?v=xR4sGgwtR2I)

### Time and Auxiliary Space Complexity

- **Time Complexity** : `O(N*M)`, where `N` is the number of vectors in `paths` and `M` is the average number of elements in each vector.
- **Auxiliary Space Complexity** : `O(1)`, as we are not using any extra space except for some variables.

### Code (C++)

```cpp
class Solution {
public:
    int isPossible(vector<vector<int>> paths){
        for(auto i: paths){
            if(accumulate(i.begin(), i.end(), 0) % 2 != 0)
                return false;
        }
        return true;
    }
};
```

### Contribution and Support

I always encourage contributors to participate in the discussion forum for this repository.

If you find this solution helpful, consider supporting us by giving a `⭐ star`.
