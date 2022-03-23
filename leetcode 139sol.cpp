class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        
        unordered_set<string>mp(wordDict.begin() , wordDict.end());
        
        int len = s.length();
        vector<bool> ans(len+1 , false);
        
        ans[0] = true;
        
        for(int i = 1 ; i <=len ; i++)
        {
            for(int j = i - 1 ; j>=0 ; j--)
            {
                
                if(ans[j]){
                string str = s.substr( j, i -j);
                // cout<< str<<" ";
                if(mp.find(str)!=mp.end()){
                    ans[i] = true;
                    break;
                }
                }
                
            }
        }
        
        return ans[s.size()];
    }
};