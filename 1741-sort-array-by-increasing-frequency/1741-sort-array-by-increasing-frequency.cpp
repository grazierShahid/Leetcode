class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        
        sort(nums.begin(), nums.end(), [&freq](const int& a, const int& b) {
            if (freq[a] != freq[b]) {
                return freq[a] < freq[b];
            } else {
                return a > b;
            }
        });
        
        return nums;
    }
};