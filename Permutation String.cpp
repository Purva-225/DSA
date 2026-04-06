/* ek string di hogi S1 FIR HUME S1 KO S2 MAI DHUNDHNA HOGGA AGAR AVAILABLE HOGI TOH TRUE KR 
DENNA MATLAB HUME S2 KE LIYE MULTIPLE OPERATIONS KRNE HAI FIR USSE EUAL KRNA HAI S1 KI STRING SE, S1 = S2 AGAR HUA TOH TRUE VARNA FALSE. */ 

class Solution {
public:

    bool isSame(int freq1[], int freq2[]){
        for(int i =0; i<26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true; 
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for(int i = 0; i<s1.length(); i++){
             freq[s1[i] - 'a']++;
        }

          int winsize = s1.length();

        for(int i =0; i<s2.length(); i++){
            int winidx = 0; int idx = i; 
             int winfreq[26] = {0};

            while(winidx < winsize && idx < s2.length()){
                 winfreq[s2[idx] - 'a']++;
                winidx++;
                idx++;
            }
             if(isSame(freq, winfreq)){
            return true;
          }
        }
         return false;
    }
};


/* agar kisi bhi char se hume uska idx chahiye ho : 
current char lo s[i] usse '-' kro 'a' se, ye hum freq mai bhi likh sakte hai 
>> freq[s[i] - 'a';]++; 

window size : ye dhundh ne ke liye, ek variable lenge jismai humara 
s1/s2 jo bhi char ho usse s1.len()/s2.len() krte. 

Koi loop agar window size pe chalana ho toh phele usse ittrate kro fir 
ek variable lo jisse initialise kro 0 se , our ek original (idx = i).

then further we are checking, kya meri window ki idx ye < hai winsize se, ye toh humari winsize our winidx hui par jo humne alag se IDX = I ye jo original idx hai isse check krenge kya IDX < S2.LEN(). 

>>> YAHA PAR WINIDX YE HAR 2 CHAR KI IDX BATATA HAI OUR IDX STRING KI ORIGINAL SINGLE CHAR KI IDX BATATA HAI <<<

fir jab tak ye window chalega tab tak ek Windowfreq store krenge jismai
>> winfreq = [s2[idx] - 'a']++; (ye s2[idx] value ko convert krta hai ASCII val mai kyuki vaha -a kiya hai), 
fir windidx++; & idx++;

Fir jo humne freq our winfreq li hai isske liye check krenge kya ye dono same hai? agar same hui toh true or false. 

isske liye separate ek boolean fun banao isFreqSame(int freq1[], int freq2[]), fir yaha ittrate krenge throughout tha 26 char and will check is freq1[i] == freq2[i] agar equal hui toh true return krna. 
*/
