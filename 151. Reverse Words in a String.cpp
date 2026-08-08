class Solution {
public:
    string reverseWords(string s) {
        int n = s.size(); 
        //reverse whole string
        reverse(s.begin(),s.end()); 
        int i = 0;
        int low = 0; int high = 0; 
        while(i < n){
            while(i <n && s[i] != ' '){
               s[high++] = s[i++];
            }
            if(low < high){
                reverse(s.begin()+low,s.begin()+high); 
                s[high] = ' '; 
                high++; 

                low = high; 
            }
            i++; 
        }
        s = s.substr(0, high-1); 
        return s; 
    }
};
