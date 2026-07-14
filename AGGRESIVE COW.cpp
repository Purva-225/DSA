 bool AssingedCows(vector<int>& arr, int cows, int dis){
    int n = arr.size();
    int lastPlaced = arr[0];
    int currentCow = 1; 
    for(int i = 1; i<n; i++){
        if(arr[i] - lastPlaced >= dis){
            currentCow++; 
            lastPlaced = arr[i]; 
        }
        if(currentCow == cows){
            return true; // 1, & id 1 > k (3,4..) false 
        }
        }
         return false; //0
    }


class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        
        sort(arr.begin(),arr.end());
        
        int n = arr.size();
       int low = 1; 
       int high = arr[n-1] - arr[0]; 
       int ans = 0; 
       
       while(low <= high){
           int mid = low + (high - low)/2; 
           if(AssingedCows(arr,k,mid)){
               ans = mid; 
               low = mid + 1; 
           }else{
               high = mid - 1; 
           }
       }
       return ans; 
    }
};
