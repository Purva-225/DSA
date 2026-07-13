long long MissingElem(vector<int>& arr, int mid){
return arr[mid] - (mid+1); 
}

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size(); 
        int low = 0; 
        int high = n-1; 
        while(low <= high){
           int mid = low + (high - low)/2;  
           if(MissingElem(arr,mid) < k){
                low = mid + 1; 
           }else{
            high = mid -1; 
           }
        } 
        return low+k; 
    }
};

// phele nikalo ki kitne positive missing integers hai vo Bhi INCREASING ORDER MAI. 
        // positive integers never stops
