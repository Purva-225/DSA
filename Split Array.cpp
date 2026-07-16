bool NextSplit(vector<int>& nums,int mid,int k){
          int n = nums.size(); 
          int split = 1; // because k is given so. 
        int sum = 0; 
       for(int i = 0; i<n; i++){
          sum += nums[i]; 
          if(sum > mid){ 
             split++; 
              sum = nums[i];
            }
       }
       if(split <= k){
          return true;
        }
       return false;
}

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size(); 
        int low = *max_element(nums.begin(),nums.end()); 
        int high = accumulate(nums.begin(),nums.end(), 0); 
        int ans = 0; 
        while(low<= high){
            int mid = low + (high - low)/2; 
            if(NextSplit(nums,mid,k)){
                ans = mid; 
               high = mid - 1; 
            }else{
                low = mid + 1; 
            }
        }
         return ans; 
    }
}; 
