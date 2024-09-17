class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        set<vector<int>> st;
        for(int i=0; i<nums.size(); i++){
            int j=i+1, k=nums.size()-1;
            
            while(j<k){
                if(i!=j && j!=k && i!=k){
                    int sum = nums[i] + nums[j] + nums[k];
                    if(sum == 0){
                        st.insert({nums[i], nums[j], nums[k]});
                        j++, k--;
                    }
                    else if(sum < 0) j++;
                    else k--;
                }
            }
        }

        for(auto x:st) res.push_back(x);
        return res;
    }
};