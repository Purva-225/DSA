// Brute Approach:
class Solution { 
public:
void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    auto markrow = [&](int i){ 
        for(int j = 0; j<m; j++){ 
            if(matrix[i][j] != 0){ 
                matrix[i][j] = -1; 
            }
        }
    };
    auto markcoloum = [&](int j){ 
        for(int i =0; i<n; i++){ 
            if(matrix[i][j] != 0){ 
                matrix[i][j] = -1; 
            }
        }
    };
    for(int i =0; i<n; i++){ 
        for(int j =0; j<m; j++){
    if(matrix[i][j] == 0){ 
        markrow(i); markcoloum(j); 
    } 
        } 
    } for(int i =0; i<n; i++){ for(int j =0; j<m; j++){ 
        if(matrix[i][j] == -1) matrix[i][j] = 0; 
      } 
   } 
 } 
};


// Better one:
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int n = matrix.size();
        int m = matrix[0].size();

          vector<int> col(m,0); 
          vector<int> row(n,0);

          for(int i=0; i<n; i++){
            for(int j =0; j<m; j++){
                if(matrix[i][j] == 0){
                    row[i] = 1; 
                   col[j] = 1; 
                }
            }
          }
           for(int i =0; i<n; i++){
            for(int j =0; j<m; j++){
                if(row[i] || col[j]){
                 matrix[i][j] = 0;
                }
            }            
           }
    }
};
// optimal one: 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int n = matrix.size();
        int m = matrix[0].size();
          
          int col0 = 1; 

          // int col{m} = 0; matrix[0][...]
          //int row {n} = 0; matrix[...][0]
          // here will solve ith in the matrix. 

          for(int i=0; i<n; i++){
            for(int j =0; j<m; j++){
            ;
                if(matrix[i][j] == 0){
                    // marking ith row, 
                   matrix[i][0] = 0; 
                   if(j != 0){
                    matrix[0][j] = 0; 
                   }
                   else{
                    col0 = 0; 
                   }
                }
            }

          }

         /* for(int i = 1; i<n; i++){
            for(int j = 1; j<m; j++){
                (int j0; j<m; j+=){
                if(matrix[i][j] !- 0){
                    // check for col & row, 
                    if(matrix[i][0] || matrix[0][j] == 0){
                        matrix[i][j] = 0; 
                    }
                }
            }
          } */
           for(int i = 1; i<n; i++){                    
            for(int j = 1; j<m; j++){                
                if(matrix[i][j] != 0){
                  
                    if(matrix[i][0] == 0 || matrix[0][j] == 0){
                        matrix[i][j] = 0; 
                    }
                }
            }
        }

          if(matrix[0][0] == 0){
            for(int j =0; j<m; j++) matrix[0][j] = 0;
          }
          if(col0 == 0){
            for(int i =0; i<n; i++) {
               matrix[i][0] = 0; 
            }
           }
    }
};
