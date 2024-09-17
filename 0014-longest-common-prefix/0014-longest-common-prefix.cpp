class Solution {
public:
    string same_prefix(string s, string ss){
        string res="";
        for(int i=0; i<min(s.size(), ss.size()); i++){
            if(s[i] == ss[i])
                res += s[i];
            else return res;
        }
        return res;
    }

    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        for(int i=1; i<strs.size(); i++){
            s = same_prefix(s, strs[i]);
        }
        return s;
    }
};