class Solution {
public:
    
    
    int dfs(int i , int j ,vector<vector<int>>& v){
        
        
        if(i<0 || i>=v.size() || j < 0 || j>=v[0].size() || v[i][j]==0){
            return 0;
        }
        
        int countArea = 1;
         v[i][j] = 0;
        
        countArea +=dfs(i+1 , j , v); // for down fashion
        countArea +=dfs(i , j+1 , v);  //for right fashion
        countArea +=dfs(i , j-1 , v);  //for left fashion
        countArea +=dfs(i-1 , j , v);  //for up fashion
        
        
        return countArea;
        
        
        
        
        
    }
    
    
    
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int maxArea = 0;
        for(int i = 0 ; i < n ; i++){
         
            for(int j = 0 ; j < m ; j++){

              if(grid[i][j] == 1){
              
                  maxArea = max(maxArea , dfs(i,j,grid));
              }
            }
        }
        
        return maxArea;
    }
};