class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0, en=nums.size()-1, mid;
        while(st<=en){
            mid = (st+en)/2;
            if(nums[mid] == target) return mid;
            if(nums[st]<=nums[mid]){
                if(nums[st]<=target  && nums[mid]>target)
                    en = mid-1;
                else st = mid+1;
            }
            else if(nums[mid]<target && target<=nums[en])
                st = mid+1;
            else en = mid-1;
        }
        return -1;
    }
};