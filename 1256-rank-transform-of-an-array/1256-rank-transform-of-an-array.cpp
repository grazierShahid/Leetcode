class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> cpy = arr;
        sort(arr.begin(), arr.end());

        unordered_map<int, int> mp;
        int rank=1, n=arr.size();
        if(n) mp[arr[0]] = rank;
        for(int i=1; i<n; i++){
            if(arr[i]>arr[i-1]) rank++;
            mp[arr[i]] = rank;
        }

        vector<int> ans(n);
        for(int i=0; i<n; i++){
            ans[i] = mp[cpy[i]];
        }

        return ans;
    }
};