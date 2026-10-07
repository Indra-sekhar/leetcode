class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto i : nums){
            mpp[i]++;
        }
        vector<int>arr;
        for(auto &i : mpp){
            arr.push_back(i.first);
        }
        sort(arr.begin(),arr.end());
        int n = arr.size();
        for(int i = 0; i < n; i++){
            for(int j = i+ 1 ; j<n; j++){
                if(mpp[arr[i]] != mpp[arr[j]]){
                    return {arr[i],arr[j]};
                }
            }
        }
        return {-1,-1};
    }
};