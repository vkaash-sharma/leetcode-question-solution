class Solution {
public:
    
    bool dfs(vector<vector<char>>& board , int i ,int j ,int count , string word){
        
        
        if(count == word.length()){
            return true;
        }
        
        
        if(i<0  || i >=board.size()  || j< 0 || j>=board[0].size() || board[i][j]!=word[count]){
            
            return false;
        }
        
       int temp = board[i][j];
        board[i][j] = '@';
        
        bool found = dfs(board,i+1,j,count+1,word) || dfs(board,i-1,j,count+1,word) || dfs(board,i,j+1,count+1,word) || dfs(board,i,j-1,count+1,word);
        
        
        board[i][j] = temp;
        return found;
        
        
    }
    
    
    
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
        
        int n = board.size();
        int m = board[0].size();
            
        for(int i = 0 ; i < n ; i++ ){

          for(int j = 0 ; j < m ; j++){

          
             if(board[i][j] == word[0] && dfs(board ,i , j ,0 , word)){

               return true;
             }
          
          }
        
        }
        return false;
    }
};



// in this question what we have to do is to first check my first element of the word is samme as matrix character if they both are same then we have to search of the other character so what we have to do is take the function dfs which can check the four side of a individual character if the character is equal to the next character so we can do the same if the count is equal to the size of the charcter means we find all the character 
// there is one exception we have to take care of that exception we traverse a character then we have to take care we again not traverse that to overcome with this what we do is simple we mark matrix character with special symbola after traverse we replace the symbol by that character.....
// happy coding