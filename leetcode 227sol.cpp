class Solution {
public:
    int calculate(string s) {
        // s+='+';
        stack<int> st;
        char sign  = '+';
        int curr = 0;
        
        for(int i = 0 ; i < s.length() ; i++){

          char ch = s[i];
            
          if(isdigit(ch)){
              curr = curr * 10 + (ch -'0');
              if(i == s.length() -1){
                  goto a;
              }
          }
            
          else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || i==s.length() - 1)
          {
              a:

             if(sign =='+'){
                 st.push(curr);
             }else if(sign == '-'){
                 st.push(-1*(curr));
             }else if(sign =='*'){
                 int a = st.top();
                 st.pop();
                 int ans = a * curr;
                 st.push(ans);
             }else if (sign =='/'){
                 int a = st.top();
                 st.pop();
                 int ans = a / curr;
                 st.push(ans);
             }
              
              sign = ch;
              curr = 0;
          
          
          }  
        }
        
        long long sum = 0 ;
        while(st.size() >0){
            // cout<< st.top() <<" ";
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};