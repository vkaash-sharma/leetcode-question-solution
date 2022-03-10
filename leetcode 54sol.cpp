class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         
       vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int total = n*m;
        int cmin = 0;
        int rmin = 0;
        int rmax = n - 1;
        int cmax= m - 1;
        int c = 0;
        
 while(c < total)
    {
        for(int i = cmin ; i <= cmax && c<total ; i++){
            
            ans.push_back(matrix[rmin][i]);
            c++;
        }
         
        rmin++;
        
        for(int row = rmin ; row <=rmax && c < total ; row++){
            ans.push_back(matrix[row][cmax]);
            c++;
            
        } 
        cmax--;
        
        for(int col =cmax ; col>=cmin && c < total; col--){
            ans.push_back(matrix[rmax][col]);
            c++;
        }
            rmax--;
        
        for(int row = rmax ; row >=rmin && c < total; row--){
            
            ans.push_back(matrix[row][cmin]);
            c++;
        }    
         
            cmin++;  
            
    }
        
        return ans;
        
        
             
    }
};

// we know the concept how we have to solve this question watch the pepcoding video