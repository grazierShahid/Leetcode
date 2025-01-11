class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        // int n = numCourses;
        vector <int> ed[n];
        vector <int> ind(n, 0);
        vector <int> res;

        for(auto x: pre){
            ed[x[0]].push_back(x[1]);
            ind[x[1]]++;
        }

        queue <int> q;

        for(int i = 0; i < n; i++){
            if(ind[i] == 0) q.push(i);
        }

        while(!q.empty()){
            auto t = q.front();
            q.pop();
            res.push_back(t);

            for(auto x: ed[t]){
                ind[x]--;
                if(ind[x] == 0) q.push(x);
            }
        }
        return res.size() == n;
    }
};