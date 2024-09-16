class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;

        for(int i=0; i<nums.size(); ){
            int low = i, high = i;

            while(high+1 < nums.size() && nums[high+1] == nums[high]+1)
                high++;

            string s = to_string(nums[low]);
            s += "->";
            s += to_string(nums[high]);

            string hi = to_string(nums[high]);
            if(high>low)
                ans.push_back(s);
            else ans.push_back(hi);

            i = high+1;
        }    
        return ans;
    }
};