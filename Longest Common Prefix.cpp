class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         int n = strs.size();
         string ans = "";
              
            if(n == 0) return "";

         for(int i = 0; i<strs[0].size(); i++){
            char Current = strs[0][i]; 
            for(int j = 1; j<n; j++){
                   if(i >= strs[j].size() || strs[j][i] != Current) {
                    return ans;
                }
            }
            ans += Current;
         }
          return ans; 
    }
};
