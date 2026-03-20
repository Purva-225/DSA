class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           /* for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
        
            }
        }
    }
    return {}; */
      
// HERE EARLIER I TRIED AN BRUTE APPROACH FOR TWO SUM BUT NOW HERE'S THE BETTER ONE USING HASHING. 
      
    map<int,int> mpp;
   int n = nums.size();
   for(int i =0; i<n; i++){
     int num = nums[i];
     int moreNeeded = target - num; 
     if(mpp.find(moreNeeded) != mpp.end()) {
       return {mpp[moreNeeded], i};
     }
     mpp[num] = i;
   }
     return{-1,-1};
    } 
};
