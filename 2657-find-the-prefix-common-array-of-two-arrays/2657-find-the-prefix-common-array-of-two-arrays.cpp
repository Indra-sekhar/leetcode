class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>ans(n);
        
        for(int i = 0; i < n; i++){
            int comm = 0;
            for(int j = 0; j <= i; j++){
                for(int k = 0; k <= i; k++){
                    if(A[j] == B[k]) comm++;
                }
            }
            ans[i] = comm;
        }
        return ans;
    }
};