class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int n = nums.size();
        // vector<int> v;
        
        for (int i=0;i<n;i++) {
            int diff = target - nums[i];
            if(m.find(diff)!=m.end()){
                return {m[diff],i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};
