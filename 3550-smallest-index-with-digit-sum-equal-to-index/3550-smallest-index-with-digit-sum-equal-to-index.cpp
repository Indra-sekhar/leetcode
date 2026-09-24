class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans = 1000;
        for(int i = 0; i < nums.size(); i++){
            int sum = 0;
            int val = nums[i];
            while(val > 0){
                int tem = val % 10;
                sum += tem;
                val /= 10;
            }
            if(sum == i){
                ans = min(i,ans);
            }
        }
        return (ans == 1000 ? -1 : ans);
    }
};