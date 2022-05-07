class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        int n = s.length();
        string ans = "";
        stack<int> st;
        vector<int> res(n , 1);
        st.push(0);
//         logic and code 
        
        for(int i = 1 ; i < n ; i++){

        if(!st.empty()){
              
            if(s[st.top()] == s[i]){
                res[i] = res[st.top()] + 1;
            }
        }
            
            st.push(i);
            
            if(res[st.top()] == k){
             for(int j = 0 ; j < k ;j++){
                 st.pop();
             }
            }
        }
        
        
        while(!st.empty()){
          
            ans+=s[st.top()];
            st.pop();
        
        }
        
        reverse(ans.begin() , ans.end());
         
        
    
        
        return ans;
    }
};