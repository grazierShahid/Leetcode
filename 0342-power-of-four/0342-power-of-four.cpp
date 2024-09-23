class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=0; i<16; i++){
            int tmp = pow(4, i);

            if(tmp == n) return true;
            if(tmp>n) return false;
        }
        return false;
    }
};