class Solution {
public:
    int gcd(int a, int b){
        if(b == 0) return a;
        return gcd(b, a % b);
    }
    int findGCD(vector<int>& nums) {
        int mn  = nums[0], mx = nums[0];
        for(auto x: nums){
            mx = max(mx, x);
            mn = min(mn, x);
        }
        return gcd(mn, mx);
    }
};