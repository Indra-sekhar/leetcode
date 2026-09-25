class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>arr;
        for(int i : nums){
            arr.push_back(i);
        }
        for(int i = nums.size()-1; i >= 0; i--){
            arr.push_back(nums[i]);
        }
        return arr;
    }
};