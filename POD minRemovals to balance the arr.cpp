class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size(); 
        sort(begin(nums),end(nums));
        int l = 1; 
        int maxelem = nums[0]; 
        int minelem = nums[0];
        int i =0, j= 0;
        long long kk = k;
        while(j < n){
            minelem = nums[i]; 
            maxelem = nums[j];
            while(i<j && maxelem > kk*minelem){
                i++;
                minelem = nums[i];
            }
            l = max(l,j-i+1);
            j++;
        }
        return n-l;
    }
};
