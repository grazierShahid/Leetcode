class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> s;
        
        for(auto x:strs){
            string ss = x;
            sort(ss.begin(), ss.end());
            s[ss].push_back(x);
        }

        vector<vector<string>> ans;
        for(auto tmp:s){
            ans.push_back(tmp.second);
        }

        return ans;
    }
};