class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int curr_sum = INT_MIN, all_max = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(curr_sum + nums[i] >= nums[i]) {
                curr_sum += nums[i];
                all_max = max(all_max,curr_sum);
            }
            else {
                curr_sum = nums[i];
                all_max = max(all_max,curr_sum);
            }
        }
        all_max = max(all_max,curr_sum);
        return all_max;
    }
};
