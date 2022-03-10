class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       
        for(int i = 0 ; i < matrix.size() ; i++ ){

         for(int j = i ; j < matrix[0].size() ; j++){

            swap(matrix[i][j] , matrix[j][i]);
         
         }
        }
        
       swapping(matrix);
        
    }
    
    void swapping(vector<vector<int>>& mat){

      for(int i = 0 ; i < mat.size() ; i++){
        
         int left = 0 ;
         int right = mat.size() - 1;
          
          while(left < right){
              
              int temp = mat[i][left];
              mat[i][left]=mat[i][right];
              mat[i][right] = temp;
              left++;
              right--;
          }
    }
    
    }
};



// what we have to do in this problem its quite really simple what we have to do is to first take the transpose of the matrix and then reverse the columns in individual rows so we can get the desie output
