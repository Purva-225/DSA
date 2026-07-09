// MONOTONIC: mid <= n then its correct sq and store it to ans, at a point where will face like mid*mid > n eliminate that and move to left. 
// search space: on N. 
// what to find: Largest sq num which is lesser than. 
// mid = low + (high - low)/2;
// what to return : ans which is storing the largest sq. 
// what if the condition getes true: store the ans and move forward. 
// why left/right: depends on mid*mid > || < than n. 

class Solution {
  public:
    int floorSqrt(int n) {
        int low = 0; 
        int high = n; 
        int ans = 0; 
        while(low <= high){
            int mid = low + (high - low)/2;
                if(1LL*mid*mid <= n){
                     ans = mid;
                    low = mid+1; 
                }else{
                    high = mid-1; 
                }
            }
        return ans; 
    }
};
