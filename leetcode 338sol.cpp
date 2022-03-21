class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> ans;
        ans.push_back(0);
        
        for(int i = 1 ; i <= n ; i++){
            if(i%2 ==0){
               ans.push_back(ans[i/2]);
            }else{
                ans.push_back(1 + ans[i / 2]);
            }
        }
        
        return ans;
    }
};


// in this what we have to see first we have to check the index is even and odd if the number is even we have to go to the even index  which consist of  1 of  1's and in case of odd we have to take care of lsb so the thing is really super simple
 