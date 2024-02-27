## GFG Problem Of The Day

### Today - 27 February 2024
### Que - Play With OR
The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/play-with-or5515/1)

### My Approach
- Iterate through the given array from index 0 to n-2.
- For each index i, perform a bitwise OR operation between arr[i] and arr[i+1].
- Update the value at arr[i] with the result of the OR operation.
- Continue this process until the second-to-last element of the array.
- Return the modified array.

### Time and Auxiliary Space Complexity

- **Time Complexity**: `O(N)`, where N is the length of the array.
- **Auxiliary Space Complexity**: `O(1)`

### Code (C++)
```cpp
int* game_with_number(int arr[], int n)
{
    for(int i = 0 ; i < n - 1; ++i){
        arr[i] |= arr[i+1];
    }
    return arr;
}
```

### Contribution and Support

I always encourage contributors to participate in the discussion forum for this repository.

If you find this solution helpful, consider supporting us by giving a `⭐ star`.
