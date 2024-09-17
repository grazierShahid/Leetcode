class Solution {
public:
    double pow(double x, int n){
        if(n==0) return 1.0;
        double y = pow(x, n/2);
        if(n&1) return y*y*x;
        else return y*y;
    }

    double myPow(double x, int n) {
        if(n<0) return 1.0/pow(x, abs(n));
        else return pow(x, n);
    }
};