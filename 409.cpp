class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        unordered_map<char, int> mp; 
        for(char &ch: s){
            mp[ch]++;
        }
        int result = 0; 
        bool oddfreq = false; 
        for(auto& it : mp){
            if(it.second % 2 == 0){
                result += it.second;
            }else{
                result += it.second - 1; 
                oddfreq = true; 
            }
        }
        if(oddfreq){
                result++; 
        }
        return result;
    }
};
