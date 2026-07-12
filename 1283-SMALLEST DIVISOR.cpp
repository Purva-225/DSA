long long  RequiredDivisor(vector<int>&nums, int div){
    int  sum =0;
    int n = nums.size(); 
    for(int i =0; i<n; i++){
        sum += (nums[i] + div - 1)/div;
    }
    return sum; 
}

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold){ 
      int low = 1; 
      int high = *max_element(nums.begin(), nums.end()); 
      int ans = 0; 
      while(low <= high){  
         int mid = low + (high - low)/2; 
         if(RequiredDivisor(nums,mid)<= threshold){
            ans = mid; 
             high = mid-1; 
         }else{
            low = mid+1; 
         }
        }
       return ans; 
    }
};



/* Monotonic: Larger divisor = Smaller sum
            Smaller divisor = Larger sum
        search space: ENTIRE ARRAY 
        what to find: Smallest divisor WHOS Result should <= threshold. 
        what to return, why? : SMALLEST DIVISOR
       */ 
     //ASSUME DIVISOR? THEN TAVERSE IN THE ARRAY AND GO TO EACH NUM CHECK IS IT DIVISIBLE TO OUR DIVISOR OR NOT, 
