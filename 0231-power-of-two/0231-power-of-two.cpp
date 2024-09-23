class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n<1) ? 0 : !(n&(n-1));
    }
};