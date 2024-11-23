
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        int nn = n;
        if(nn<0){
            nn = (-1)*nn;
        }
      while(nn){
        if(nn%2 == 0){
            x = x*x;
            n = n/2;
        }
        else{
            ans = ans*x;
            n--;
        }
      }
      if(n<0){
        ans = 1/(ans);
      }
      return ans;
    }
};
