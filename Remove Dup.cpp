class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0; 
        for(auto a : nums){
            if(i ==0 || i == 1 || nums[i-2] != a){
            nums[i] = a;
            i += 1;
            }
        }
        return i;
    }
};
