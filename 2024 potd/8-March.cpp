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
