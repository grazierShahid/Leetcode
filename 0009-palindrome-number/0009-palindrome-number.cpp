class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long y=0, tmp=x;
        while(tmp){
            y *= 10;
            y += tmp%10;
            tmp /= 10;
        }

        if(x != y) return false;
        else return true;
    }
};