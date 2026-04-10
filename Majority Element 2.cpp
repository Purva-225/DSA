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

// Better Approach 
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> list;
       int n = nums.size();
       int min = (int)(n/3) + 1; 
        map<int,int> mpp; 

        for(int i =0; i < n; i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == min){
                 list.push_back(nums[i]); 
            }
             if(list.size() == 2) break; 
        }
        sort(list.begin(), list.end());
        return list; 
    }
};

// An optimal one just because of Space-C is worst. 

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        int cnt1 = 0; 
        int cnt2 = 0; 
        int element1 = INT_MIN; 
        int element2 = INT_MIN; 

        for(int i = 0; i < n; i++) {
            if(cnt1 == 0 && element2 != nums[i]) {
                cnt1 = 1; 
                element1 = nums[i];
            }
            else if(cnt2 == 0 && element1 != nums[i]) {
                cnt2 = 1; 
                element2 = nums[i];
            }
            else if(nums[i] == element1) {
                cnt1++; 
            }
            else if(nums[i] == element2) {
                cnt2++; 
            }
            else {
                cnt1--; 
                cnt2--; 
            }
        }

        vector<int> list; 
        cnt1 = 0; 
        cnt2 = 0; 
        for(int i = 0; i < n; i++) {
            if(nums[i] == element1) {
                cnt1++;
            }
            if(nums[i] == element2) {
                cnt2++; 
            }
        }

        int mini = (int)(n / 3) + 1;
        if(cnt1 >= mini) {
            list.push_back(element1); 
        }
        if(cnt2 >= mini) { 
            list.push_back(element2); 
        }
        
        sort(list.begin(), list.end()); 
        return list; 
    }
};


