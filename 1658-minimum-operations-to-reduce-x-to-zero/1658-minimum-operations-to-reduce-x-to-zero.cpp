class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = 0;
        for(int num : nums){
            total += num;
        }
        int target = total - x;
        if(target == 0){
            return nums.size();
        }
        int left = 0,sum = 0;
        int maxLen = -1;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            while(left <= i && sum > target){
                sum -= nums[left];
                left++;
            }
            if(sum == target){
                maxLen = max(maxLen,i-left+1);
            }
        }
        if(maxLen == -1){
            return -1;
        }
        return nums.size() - maxLen;
        // int result = x;
        // int count = 0;
        // int start = 0,end = nums.size()-1;
        // while(start < end){
        //     if(nums[start] >= nums[end] && nums[start] <= result){
        //         result -= nums[start];
        //         start++;
        //         count++;    
        //     }
        //     else if(nums[end] >= nums[start] && nums[end] <= result){
        //             result -= nums[end];
        //             end--;
        //             count++;
        //     }
        //     else{
        //         start++,end--;
        //     }
            
        // }
        // if(result == 0){
        //     return count;
        // }
        // return -1;
    }
};