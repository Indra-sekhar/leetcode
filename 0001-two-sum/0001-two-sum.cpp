class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i = 0; i < nums.size(); i++){
            int sum = target - nums[i];
            if(mpp.count(sum)){
                return {mpp[sum],i};
            }
            else{
                mpp[nums[i]] = i;
            }
        }
        return {};

    }
};