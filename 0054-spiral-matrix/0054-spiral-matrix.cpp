class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        int tot_cell=n*m, i=0, j=0, left=-1, up=0;

        vector<int> v;
        while(tot_cell>0){
            for(; j<m; j++){
                v.push_back(mat[i][j]);
                tot_cell--;
            }
            i++, j--, m--;
            if(tot_cell==0) break;

            for(; i<n; i++){
                v.push_back(mat[i][j]);
                tot_cell--;
            }
            i--, j--, n--;
            if(tot_cell==0) break;

            for(; j>left; j--){
                v.push_back(mat[i][j]);
                tot_cell--;
            }
            i--, j++, left++;
            if(tot_cell==0) break;

            for(; i>up; i--){
                v.push_back(mat[i][j]);
                tot_cell--;
            } 
            i++, j++, up++;

            //n--, m--, up++, left++;
        }

        return v;
    }
};