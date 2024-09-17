class Solution {
public:
    string ss;
    bool isPalindrome(int i, int j){
        while(i<j){
            if(ss[i] != ss[j]) return false;
            i++, j--;
        }
        return true;
    }


    string longestPalindrome(string s) {
        if(s.size()==1) return s;
        ss = s;

        int st=0, len=0;
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                if(isPalindrome(i, j)){
                    if(j-i+1 > len){
                        len = j-i+1;
                        st = i;
                    }
                }
            }
        }

        return s.substr(st, len);
    }
};