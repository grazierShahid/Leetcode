class Solution {
public:
    int strStr(string h, string n) {
        if(n.size()>h.size()) return -1;

        for(int i=0; i<=h.size()-n.size(); i++){
            int cnt=0;
            for(int j=0; j<n.size(); j++){
                if(h[i+j]==n[j])
                    cnt++;
                else break;
            }
            if(cnt == n.size()){
                return i;
            }
        }
        return -1;
    }
};
