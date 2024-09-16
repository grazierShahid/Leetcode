class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int cnt = 0, mx;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>cnt){
                cnt = mp[nums[i]];
                mx = nums[i];
            }
        }
        return mx;
    }
};