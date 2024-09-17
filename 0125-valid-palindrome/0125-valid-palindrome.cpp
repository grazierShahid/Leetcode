class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j = s.size()-1;
        while(i<j){
            s[i] = tolower(s[i]);
            s[j] = tolower(s[j]);
            if((s[i]<'a' || s[i]>'z') && !(s[i]<='9' && s[i]>='0')) i++;
            if((s[j]<'a' || s[j]>'z') && !(s[j]<='9' && s[j]>='0')) j--;
            bool a = (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9');
            bool b = (s[j]>='a' && s[j]<='z') || (s[j]>='0' && s[j]<='9');
            if(a && b){
                if(s[i] != s[j]) return false;
                i++, j--;
            }
        }
        return true;
    }
};