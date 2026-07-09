class Solution {
public:
    int reverse(int x) {
        if (x== INT_MIN) return 0;
      bool flag;
      if (x<0) flag=1;
      else flag=0;
      if (x<0){
         x= x*(-1);
      }  
      int ans=0;
      while(x>0){
        int digit= x%10;
        if (ans > INT_MAX/10 || (ans== INT_MAX/10 && digit >7)) return 0;
        ans= ans * 10 + digit;
        x= x/10;

      }
    if (flag==1) return ans* (-1);
    else return ans;
    }
};