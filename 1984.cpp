/* You are given a 0-indexed integer array nums, where nums[i] represents the score of the ith student. You are also given an integer k.
Pick the scores of any k students from the array so that the difference between the highest and the lowest of the k scores is minimized.
Return the minimum possible difference. */ 

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int minDiff = INT_MAX;
        sort(begin(nums),end(nums));

        for(int i = k-1; i<n; i++){
            int minelem = nums[i-k+1]; 
            int maxelem = nums[i]; 
            minDiff = min(minDiff, maxelem - minelem); 
        }
        return minDiff;
    }
};
