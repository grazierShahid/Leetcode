class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]] = i;
        }

        int a, b;
        for(int i=0; i<nums.size(); i++){
            int need = target - nums[i];
            if(mp.count(need) && mp[need] != i){
                a = i, b = mp[need];
            }
        }
        vector<int> res = {a, b};
        return res;
    }
};