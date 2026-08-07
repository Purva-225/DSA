Brute: 
class Solution { 
  public:
    int countSubstring(string &s) {
        int n = s.length(); 
        int cnt = 0; 
        for(int i = 0; i<n; i++){
          int  hash[3] = {0}; 
            for(int j = i; j<n; j++){
                hash[s[j]-'a'] = 1; 
                if(hash[0]+hash[1]+hash[2] == 3) cnt = cnt+1; 
            }
        }
        return cnt; 
    }
};
Better:
[ BUT IN THIS CASE FOR THE CASE LIKE [ aaaaaaaaaaaa] or [ aaabbbbbb] ] it was unable to handle because of BREAK statement. 
class Solution { 
  public:
    int countSubstring(string &s) {
        int n = s.length(); 
        int cnt = 0; 
        for(int i = 0; i<n; i++){
          int  hash[3] = {0}; 
            for(int j = i; j<n; j++){
                if(hash[0]+hash[1]+hash[2] == 3) cnt = cnt+(n+1);
                   break; 
            }
        }
        return cnt; 
    }
};

OPTIMAL: 
class Solution { 
  public:
    int countSubstring(string &s) {
        int n = s.length(); 
        vector<int> lastSeen(3,-1);
        int minimum = 0; 
        int cnt = 0; 
        for(int i = 0; i<n; i++){
          lastSeen[s[i] - 'a'] = i; 
          if(lastSeen[0] != -1 && lastSeen[1] != -1 && lastSeen[2] != -1){
          minimum = min(min(lastSeen[0], lastSeen[1]), lastSeen[2]);
          cnt += 1+minimum;
          }
        }
        return cnt; 
    }
};
O(N)
O(1) using 3 char a b c 

























