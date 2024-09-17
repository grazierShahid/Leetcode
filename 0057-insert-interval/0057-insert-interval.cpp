class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size(), st = 0, en = 0;
        while(en<n){
            if(newInterval[0] <= intervals[en][1]){
                if(newInterval[1] < intervals[en][0])
                    break;
                newInterval[0] = min(newInterval[0], intervals[en][0]);
                newInterval[1] = max(newInterval[1], intervals[en][1]);
            }
            else st++;
            en++;
        }
        
        vector<vector<int>> v;
        for(int i=0; i<st; i++) v.push_back(intervals[i]);
        v.push_back(newInterval);
        for(int i=en; i<n; i++) v.push_back(intervals[i]);

        return v;
    }
};