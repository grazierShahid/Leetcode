class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> cnt;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            if(cnt[nums[i]] < 2){
                v.push_back(nums[i]);
                cnt[nums[i]]++;
            }
        }
        nums = v;
        return v.size();
    }
};