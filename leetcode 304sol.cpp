class NumMatrix {
public:
    
    int pref[201][201];
    NumMatrix(vector<vector<int>>& matrix) {
      

        int n = matrix.size();
        int m = matrix[0].size();
        
//        lets perform for the row
        
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                pref[i][j] = matrix[i][j];
                
                if(i >0){
                    pref[i][j] +=pref[i - 1][j];
                }
            }
        }
        
        
//         lets solve for the column
        
      for(int i = 0 ; i < n ; i++){
            for(int j = 1 ; j < m ; j++){
               
                pref[i][j] +=pref[i][j - 1];
            }
        }
        
        
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        int ans = pref[row2][col2];
        
        if(row1 >0){
            ans -= pref[row1-1][col2];
        }
        if(col1 > 0){
            ans -= pref[row2][col1 - 1];
        }
        if(col1 > 0 && row1 > 0){
            ans +=pref[row1 - 1][col1 - 1];
        }
        
        return ans;
        
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */