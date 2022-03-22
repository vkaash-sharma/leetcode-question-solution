class Solution {
public:
    int numDecodings(string s) {
        
        int n = s.length() ;
        
        if(s[0] == '0'){
            return 0;
        }
        
       vector<int> ans(n , 0);
        
        ans[0] = 1;
        
        
        for(int i = 1 ; i < n ; i++){
            
            if(s[i - 1 ] == '0' && s[i] == '0'){
                ans[i] = 0;
            }
            else if (s[i - 1] == '0' && s[i]!= '0' ){
                ans[i] =  ans [ i - 1];
            }
            else if(s[i - 1]!= '0' && s[i] == '0'){
             
               if(s[i - 1]=='1' || s[i - 1] =='2'){
                   
                   
                   if(i >=2){
                       ans[i] = ans[i - 2];
                   }else{
                      ans[i] = 1;
                   }
               }
                else{
                   ans[i] = 0;
               }
            }
            else{

             if((s[i - 1] - '0') *10 + (s[i] - '0') <= 26){
                 
                 if(i >=2){
                     ans[i] = ans[i - 1] + ans[i - 2];
                 }else{
                     
                     ans[i] = ans[i - 1] + 1;
                 }
             }
             else{
                 
                 ans[i] =  ans[i - 1];
             }   
            
            }
            
        }
        
        
        
        
        return ans[n-1];
        
    }
};



// please refer pepcoding video for more clearity 