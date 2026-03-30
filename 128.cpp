// BRUTE APPROACH : WHICH GIVES TLE. 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;

        for(int i = 0; i < n; i++) {
            int x = nums[i];
            int cnt = 1;

           
            while(find(nums.begin(), nums.end(), x + 1) != nums.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }

            maxi = max(maxi, cnt);
        }

        return maxi;
    }
};
/* BETTER APPROACH : - 
    class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.size() == 0) return 0; 
       sort(nums.begin(), nums.end());
       int LastSmaller = INT_MIN; 
       int cnt = 0;
       int longest = 1;
       int n = nums.size(); 

       for(int i =0; i<n; i++){
          if(nums[i]-1 == LastSmaller){
            cnt += 1;
            LastSmaller = nums[i];
          }
          else if(LastSmaller != nums[i]){
            cnt = 1; 
            LastSmaller = nums[i];
          }
          longest = max(longest,cnt);
       }
      return longest;
    }
}; */ 
/* OPTIMAL : 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for (int num : st) {
            if (st.find(num - 1) == st.end()) {
                int currentNum = num;
                int count = 1;

                while (st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    count++;
                }

                longest = max(longest, count);
            }
        }
        return longest;
    }
}; */
