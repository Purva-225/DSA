class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length(); 

        int cnt =0; 
        if(n <= 8){
            cnt = n; 
        }else if(n<=16){
            cnt = 8+(n-8)*2; 
        }else if(n<=24){
            cnt = 24+(n-16)*3; 
        }else if(n<=48){
            cnt = 48 + (n-24)*4;
        }
        return cnt; 
    }
};
