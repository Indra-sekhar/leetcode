class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>>ans(n-2,vector<int>(n-2,0));
        for(int i = 0; i < n - 2; i++){
            for(int j = 0; j < n -2 ; j++){
                int max = INT_MIN;
                for(int s = i ; s < i + 3; s++){
                    for(int sa = j ; sa < j + 3; sa++){
                        if(grid[s][sa] > max){
                            max = grid[s][sa];
                        }
                    }
                }
                ans[i][j] = max;
            }
        }
        return ans;
    }
};