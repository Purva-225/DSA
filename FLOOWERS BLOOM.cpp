long long requiredDays(vector<int>& bloomDay, int k, int Day){
   int consicative = 0; 
  int BouquetCnt = 0; 

   for(int i =0; i<bloomDay.size(); i++){
    if(bloomDay[i] <= Day){ // is consicative == k 
         consicative++;
    }else{
        consicative = 0; 
    }
    if(consicative == k){
          BouquetCnt++; 
          consicative = 0; 
    }
    }
   return  BouquetCnt;
}
// after getting the exact bloom flowers put them into the bouquet, when one bouquet gets k flowers i'll increase the bouquet cnt. 

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size(); 
        int ans = -1; 
      int low = *min_element(bloomDay.begin(), bloomDay.end());
      int high = *max_element(bloomDay.begin(), bloomDay.end());
        while(low <= high){
            int mid = low + (high - low)/2; 
           if(requiredDays(bloomDay,k,mid) >= m){
     
            ans = mid; 
            high = mid - 1; 
        }else{
            low = mid+1; 
        }
        if(1LL*m*k > bloomDay.size()){
            return -1; 
        }
        }
         return ans; 
    }
};
