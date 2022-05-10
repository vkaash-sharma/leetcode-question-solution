class Solution {
public:
    
    void helper(string digit , int ind ,string sub, string arr[] , vector<string> &ans){
        
        if(ind>=digit.size()){
            ans.push_back(sub);
            return; 
        }
        int num = digit[ind]-'0';
        string element = arr[num];
        for(int i = 0 ; i < element.size() ; i++){
            
            sub.push_back(element[i]);
            
            helper(digit,ind+1,sub,arr,ans);
            sub.pop_back();
        }
        
    }
    
    
    
    
    
    
    
    
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
       if(digits.length() == 0){
           return ans;
       } 
        
      string arr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string sub;
      helper(digits,0,sub,arr,ans);  
        
        
       return ans; 
        
    }
};