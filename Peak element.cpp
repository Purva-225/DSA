class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       //  Monotonic: peak element is STRICKTLY greater than its NEIGHBORS. 
        // arr[mid] < arr[mid+1]
        // low = mid+1;  
       //  Search space: entire array.
       //  what to return: return the idx of any peak element.
       //  what to find:  find a peak element
       //  where does mid goes left/right? WHY?: 
       //  what if the condition is true: 
       //  what we have to solve:  If the array contains multiple peaks, return the index to any of the peaks.
      int n = nums.size(); 
      int low = 0; 
      int high = n-1; 

      while(low < high){
        int mid = low + (high - low)/2; 
        if(nums[mid] < nums[mid+1]){
            low = mid+1; 
        }else{
            high = mid; 
        }
      }
      return low; 
    }
};
