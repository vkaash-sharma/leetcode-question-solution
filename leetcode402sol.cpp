//Solution of 402 leetcode februrary challenge 

class Solution {
public:
    string removeKdigits(string nums, int k) {
        
        int digit = nums.length() - k;
        if (nums.length() <=k){
            return "0";
        }
        int top = -1;
        int start = 0 ;
        vector<char> st(nums.begin() , nums.end());
        
        for (int i = 0 ; i<st.size() ;i++ ){
            
            while(top>=0 && st[top] > st[i] && k>0){
                top--;
                k--;
            }
            top++;
            st[top]=st[i];
        }
        
        
        
        while(start<=top && st[start]=='0'){start++;}
        
        string ans = "";
        
        for (int i = start ; i< digit ; i++){
            ans+=st[i];
        }
        if (ans==""){
            return "0";
        }
        return ans;
        
    }
};

//lets talk about the intution on this question we put a top pointer at intial position -1  the if we find a value which is st[top] >st[i] the k>0 the  we decrease the value of k  and decrease the value of top until we find the value st[top] < st[i] then we increase the value of top ans overide the s[top]=s[i] and vice versa outer while loop check the condition of 10200 and k=1 if we find the value at initial point 0  we move the start pointer till we fond non zero //

// video
// https://www.youtube.com/watch?v=r_OyrbYWP1M
