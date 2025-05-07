class Solution {
public:
    double myPow(double x, int n) {
        long Binary = n;
        double ans = 1;
        if(n < 0){
            x = 1/x;
            Binary = -Binary;
        }
        while(Binary > 0){
            if(Binary%2 == 1){
                ans *= x;
            }
            x *= x;
            Binary /= 2;
        }
        return ans;
    }
};