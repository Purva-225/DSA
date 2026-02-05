class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
       int n = nums.size(); 
       vector<int> result(n,0);
       for(int i =0; i<n; i++){
          int reduce = nums[i] % n;
            int Nidx = (i + reduce)%n;
            if(Nidx < 0){
                Nidx += n;
            }
            result[i] =nums[Nidx];
       }
       return result;
    }
};
