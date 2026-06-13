class Solution {
public:
    int search(vector<int>& A, int tar) {
        // IN THIS ABOVE GIVEN PROBLEM I HAVE TO WOTK ON THEY HAVE GIVEN THE SORTED ARRAY BUT ITS NOT ACTULLY SORTED AT ONE POINT IT IS BREAKING AND FOLLOWINF AGAIN SORTED SO WE HAVE TO FIND WHERE DOES OUR ACTUAL PROBLEM LIES. 

        int n = A.size(); 
        int st =0; int end = n-1; 
        int ans = 0; 

        while(st<=end){
            int mid = st + (end - st)/2; 

            if(A[mid] == tar){
                return mid;

            }else if(A[st] <= A[mid]){
                if(tar >= A[st] && tar <= A[mid]){
                    end = mid - 1;                   
                }
                else { 
                  st = mid+1;
              }
            }else{
                if(tar >= A[mid] && tar <= A[end]){
                    st = mid + 1;
                }else{
                    end = mid - 1; 
                }
            }
        }
        return -1; 
    }
};
    
