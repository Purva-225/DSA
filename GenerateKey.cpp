class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
      string a = to_string(num1);
      string b = to_string(num2);
      string c = to_string(num3);

      while(a.size() < 4) a = "0" + a; 
      while (b.size() <4) b = "0" + b;
      while(c.size() < 4) c = "0" + c;

      string res = "";

      for(int i = 0; i<4; i++){
        char m = min({a[i],b[i],c[i]});
        res += m;
      }
      return stoi(res);

    }
};
