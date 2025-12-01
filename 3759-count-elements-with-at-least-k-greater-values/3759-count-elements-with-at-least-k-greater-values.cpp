class Solution {
public:
    int countElements(vector<int>& v, int k) {
        int cnt = 0, n = v.size();
        sort(v.begin(), v.end());

        vector<int> g(n);
        g[n-1] = 0;

        for(int i=n-2; i>=0; i--){
            if(v[i]==v[i+1]) g[i] = g[i+1];
            else g[i] = n-i-1;
        }

        for(auto x:g) if(x>=k) cnt++;

        return cnt;
    }
};