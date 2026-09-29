class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int value = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                for(int k = j+1; k < nums.size(); k++){
                    if(i != j && j != k && k != i){
                        if(nums[i] == nums[j] && nums[j] == nums[k]){
                            int dif = abs(i-j) + abs(j - k) + abs(k - i);
                            value = min(value,dif);
                        }
                    }
                }
            }
        }
        if(value == INT_MAX){
            return -1;
        }
        return value;
    }
};