// Optimal Solution
class Solution {
public:

    vector<int> rows(int row){
        long long ans = 1; 
        vector<int> ansRows; 
        ansRows.push_back(1);

        for(int col = 1; col < row; col++){
            ans = ans * (row - col);
            ans = ans / col; 
            ansRows.push_back(ans); 
        }
        return ansRows; 
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans; 
        for(int i = 1; i<= numRows; i++){
            ans.push_back(rows(i));
        }
        return ans; 
    }
};

// Here is the approach where we can merge the above's extra part. 

class Solution {
public:

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans; 

        for(int i = 1; i <= numRows; i++){
            long long val = 1; 
            vector<int> ansRows; 
            ansRows.push_back(1);

            for(int col = 1; col < i; col++){
                val = val * (i - col);
                val = val / col; 
                ansRows.push_back(val); 
            }

            ans.push_back(ansRows);
        }

        return ans; 
    }
};
