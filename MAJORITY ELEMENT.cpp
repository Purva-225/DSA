// BRUTE APPROACH
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
    
       for(int i =0; i<n; i++){
         int cnt = 0; 
         for(int j =0; j<n; j++){
           if(nums[i] == nums[j])
            cnt++;
           
         }
           if(cnt > n/2) return nums[i];
       }
       return -1;
    }
};

// Better approach using hashing :

int n = nums.size();

      map<int,int> mpp;

      for(int i =0; i <n; i++){
        mpp[nums[i]]++;
      }
      for(auto it : mpp){
        if(it.second > (nums.size()/2)){
            return it.first;
        }
      }
      return -1; 
}
};

// optimal one : 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
        int cnt = 0; 
       int elem;

       for(int i = 0; i<n; i++){
          if(cnt == 0){
            cnt = 1; 
            elem = nums[i];
          }else if(nums[i] == elem){
            cnt++;
          }else {
            cnt--; 
          }
       }
       int cnt1 = 0; 
       for(int i = 0; i<n; i++){
        if(nums[i] == elem){
            cnt1++; 
        } 
        if(cnt1 > (n / 2)){
            return elem;
        }
       }
       return -1; 
    }
};
