class Solution {
public:
    bool isPalindrome(string s, int st, int en){
        for(int i=st; i<en/2; i++){
            if(s[i]!=s[en-1-i])
                return false;
        }
        return true;
    }

    string longestPalindrome(string s) {
        if(s.size()==1) return s;

        int st=0, len=0;
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                if(isPalindrome(s, i, j)){
                    if(j-i+1 > len){
                        len = j-i;
                        st = i;
                    }
                }
            }
        }

        return s.substr(st, len);
    }
};