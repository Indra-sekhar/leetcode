class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>>v(n,vector<int>(n));
        for(int i=0 ; i<n ; i++) {
            for(int j=0 ; j<n ; j++) {
                int newcol = (j-rowShift[i]+n)%n;
                int newrow = (i-colShift[newcol]+n)%n;
                v[newrow][newcol] = grid[i][j];
            }
        }
        return v;
    }
};