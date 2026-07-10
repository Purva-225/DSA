long long totalHours(vector<int>& piles, int speed){
long long hours = 0; 

for(int i =0; i<piles.size(); i++){
    hours += (piles[i] + speed-1)/speed; 
}
return hours; 
}

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();  
        int low = 1; 
        int high = *max_element(piles.begin(), piles.end()); 
        int ans = high; 

        while(low <= high){
            int mid = (low + high)/2; 

            long long requiredHours = totalHours(piles,mid);
            if(requiredHours <= h){
               ans =  mid; // if speed works...
               high = mid-1; // try smaller
            }else{
                low = mid+1; // too slow
            }
        }
        return ans; 
    }
};
