class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0; i<=n; i++){
            int tmp=i, cnt=0;
            while(tmp){
                if(tmp&1) cnt++;
                tmp = tmp>>1;
            }
            ans[i] = cnt;
        }
        return ans;
    }
};