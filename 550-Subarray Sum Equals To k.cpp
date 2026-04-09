//Brutal
int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int cnt = 0; 

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = 0; 
            for(int x = i; x <= j; x++){
                sum += nums[x];
            }
            if(sum == k) {
                cnt++;
            }
        }
    }
    return cnt; 
}

//Better
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
         
        int cnt = 0; 
        for(int i = 0; i < n; i++){
            int sum = 0; 
            for(int j = i; j < n; j++){
                sum += nums[j];   // FIX HERE
                if(sum == k) {
                    cnt++;
                }
            }
        }
        return cnt; 
    }
};


//optimal 
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
         
         map<int,int> mpp; 
         mpp[0] = 1;
         int prefixSum = 0; int cnt = 0; 

         for(int i =0; i<n; i++){
            prefixSum += nums[i];
            int remove = prefixSum -k; 
            cnt += mpp[remove];
            mpp[prefixSum] += 1;
         }
         return cnt;
    }
};
