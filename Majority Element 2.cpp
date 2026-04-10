//BRUTAL APPROACH. 
WITH TC : O(N^2); 
SC: O(2)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> list;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int cnt = 0;

            for(int j = 0; j < n; j++){
                if(nums[j] == nums[i]){
                    cnt++;
                }
            }

            if(cnt > n/3){
                if(find(list.begin(), list.end(), nums[i]) == list.end()){
                    list.push_back(nums[i]);
                }
            }
        }

        return list; 
    }
};
