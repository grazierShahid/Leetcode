class Solution {
public:
    int mySqrt(int x) {
        long long lo = 0, hi = x, mid;
        int ret;
        while(lo<=hi){
            mid = (lo+hi)>>1;
            if(mid*mid==x) return mid;
            if(mid*mid<x) {
                lo = mid+1;
                ret = (int)mid;
            } 
            else hi = mid-1;
        }
        return ret;
    }
};