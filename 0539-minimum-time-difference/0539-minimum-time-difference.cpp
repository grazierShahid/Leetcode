class Solution {
int calMin(string s){
    int min = s[4]-'0';
    min += 10*s[3];
    min += s[1]*60;
    min += s[0]*60*10;

    return min;
}

public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> mn;
        for(auto s:timePoints){
            mn.push_back(calMin(s));
        }

        sort(mn.begin(), mn.end());

        int gap = INT_MAX;

        for(int i=0; i<mn.size()-1; i++){
            gap = min(gap, mn[i+1]-mn[i]);
        }

        gap = min(gap, 24*60 - mn.back() + mn.front());
        return gap;
    }
};