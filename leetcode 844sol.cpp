class Solution {
public:
    bool backspaceCompare(string s, string t) {
      
        int k = 0;
        int p = 0;
        for(int i = 0 ; i < s.length() ; i++){
            
            if(s[i]=='#'){
              
                k--;
                k = max(0 ,k);    
                
            }else{
              s[k] =s[i];
                k++;
            }
        }
        // for(int i = 0 ; i < s.length() ;i++){
        //     cout<<s[i];
        // }
        
        for(int i = 0 ; i < t.length() ; i++){
            
            if(t[i]=='#'){
              
                p--;
            p = max(0 , p);
                
            }else{
              t[p] =t[i];
                p++;
            }
        }
//         cout<<"\n";
//          for(int i = 0 ; i < t.length() ;i++){
//             cout<<t[i];
//         }
       
        if(k!=p){
            return false;
        }else{

        for(int i = 0 ;i < k ;i++ ){
            
            if(s[i]!=t[i]){
            return false;
            }
        }
        
        }
        
        return true;
        
       
    }
};