class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
   
        int n  = matrix.size();
        int m =  matrix[0].size(); 
        
        vector<vector<int>>dp(n , vector<int>(m));
        
        int res = 0;
        
        for(int i = 0 ; i < n ; i++)  // for number of rows
        {
            for(int j = 0 ; j < m ; j++){    // for number of columns 
                
                
                if (i == 0 || j == 0){      // we have to inore first row first column 
                    dp[i][j] = matrix[i][j] - '0';
                }else{
                    
                    if(matrix[i][j]!='0'){
                        
                        dp[i][j] = 1+min(dp[i-1][j] ,min(dp[i][j-1] , dp[i-1][j-1]));
                    }
                    
                }
                  res = max (res , dp[i][j]);
            }
        }
        
        return res*res;
        
    }
};



//  what  we have to do listen carefully ok 
/* lets assume  we have a matrix 

1 0 1 1 1
1 0 1 1 1
1 1 1 1 1
1 0 0 1 0

we dont have to do anything in my first row and first column so whatever task we perform it doesnot go out of the bound 

so the question arises what we have to do.

    we can make a dp array which can take a trace of the values



     so how my dp array take the max area

     so we to always check in such way for ex:-

     i am standing at 11 position the matrix  we have to check the position just above of it 01 and just left value means 10 and diagonal value 00

     and we have to take the minimum of the this three add on to it because because if the minimum values lets its one so the diagonal value indicates that now u hit the 2*2 matrix 

     expression:-if(matrix[i][j]!='0'){
                        
                        dp[i][j] = 1+min(dp[i-1][j] ,min(dp[i][j-1] , dp[i-1][j-1]));
                    }
                    

                    now we have to take the max of these

                    then we have to check res=max(res,dp[i][j])

                    // and return res*res  as we know we have to return the area of sqaure so its side * side
                    