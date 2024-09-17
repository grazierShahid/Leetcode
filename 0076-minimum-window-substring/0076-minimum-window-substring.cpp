class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        for(auto c:t) mp[c]++;
        
        int start = 0, end = 0, len = t.size(), ans = INT_MAX, head = 0;
        while(end < s.size()){
            if(mp[s[end++]]-- > 0) len--;
            while(len == 0){
                if(end - start < ans)
                    ans = end - (head=start);
                if(mp[s[start++]]++ == 0)
                    len++;
            }
        }
        return ans == INT_MAX ? "" : s.substr(head, ans);
    }
};