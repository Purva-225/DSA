class Solution {
public:
     int gcd(int a, int b){
        if(b > a){
            return gcd(b,a);
        }
        if(b == 0){
            return a;
        }
            return gcd(b,a%b); 
     }
    int findGCD(vector<int>& nums) {
        int n = nums.size(); 
        sort(nums.begin(), nums.end()); 
         int min  = nums[0]; 
           int max = nums[n-1];
           return gcd(min,max); 
    }
};
