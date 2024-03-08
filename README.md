## GFG Problem Of The Day

### Today - 08 March 2024
### Que - Check if frequencies can be equal
The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/check-frequencies4211/1)

### My Approach
- I iterate through the given string and count the frequency of each character using an unordered_map.
- I find the minimum and maximum frequencies among all characters.
- I check if the difference between the maximum and minimum frequencies is more than 1. If it is, return 0 (false).
- I count the number of characters having the minimum frequency.
- I check if the difference between the total number of unique characters and the number of characters with the minimum frequency is at most 1. If it is, return 1 (true), indicating that frequencies can be made equal.

### Time and Auxiliary Space Complexity

- **Time Complexity** : O`(N)`, where N is the length of the input string.
- **Auxiliary Space Complexity** : At most, 26 unique characters can be used, resulting in a time complexity of `O(26)`

### Code (C++)
```cpp
class Solution{
public:
bool sameFreq(string s)
{
    // code here 
    int n = s.size();
    map<char,int> mp;
    for(auto it : s) mp[it]++;
    map<int,int> h;
 
   int mini = 1e7;
    for(auto it : mp){
        mini = min(it.second,mini);
      h[it.second]++;
    }
   
    if(h.size()==1) return true;
    if(h.size() ==2){
      
        for(auto it : h){
            int cnt = it.second;
            int mpfreq = it.first;
           if(cnt == 1){
               if(mpfreq == 1) return true;
               if(mpfreq == mini + 1) return true;
           }
            
        }
    }
    return false;
   
}
};
```

### Contribution and Support

I always encourage contributors to participate in the discussion forum for this repository.

If you find this solution helpful, consider supporting us by giving a `⭐ star`.
