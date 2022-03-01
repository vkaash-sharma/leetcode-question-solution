class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        
        vector<int> res;
        vector<vector<int>> ans;
        
        for (int i = 0 ; i < numRows ; i++){
            
            res.assign(i+1 , 1 );
            
            for(int j = 1 ; j < i ; j++){
                
                res[j] =  ans[i - 1][j - 1] + ans [i - 1][j];
                
            }
            ans.push_back(res);
        }
        return ans;
    }
};

// we have to find the pascal triangle so it is easy too determine the things