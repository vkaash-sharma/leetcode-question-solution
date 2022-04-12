class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
        unordered_map<char , int > mp;
        
        int ans  = 0;
        int i = 0 ;
        int j = 0;
        int size = s.size();
         while(j < size){
             
             auto ch = s[j];
             if (mp.count(ch)){
              
                 i = max (i  , mp[ch] + 1);
             }
             
             mp[ch] = j;
             ans = max(ans , j - i + 1);
             j++;
             
         }
        
        return ans;
        
        
    }
};