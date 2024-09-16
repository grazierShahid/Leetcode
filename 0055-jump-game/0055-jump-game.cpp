class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mxJmp = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(mxJmp >= nums.size()-1) return true;
            if(nums[i]==0 && mxJmp == i) return false;
            if(i+nums[i] > mxJmp) mxJmp = i + nums[i];
        }
        return true;
    }
};