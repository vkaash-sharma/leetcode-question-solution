class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       
        
        string ans = "";
        
        sort(strs.begin() , strs.end());
        int i = 0 , j = 0;
        
        while(strs[0][i] && strs[strs.size() -1][j]){

          if(strs[0][i] == strs[strs.size() - 1][j]){

            ans+=strs[0][i];
              i++;
            j++;
          }else{
              break;
          }
            
        }
        
        return ans;
        
    }
};