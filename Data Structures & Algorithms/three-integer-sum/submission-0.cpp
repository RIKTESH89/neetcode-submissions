class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n-2;i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            int p1 = i+1, p2= n-1;
            int target = -nums[i];
            while(p1<p2 && p2>i && p1<n){
                if(nums[p1]+nums[p2] == target){
                    ans.push_back({nums[i],nums[p1],nums[p2]});
                    while(nums[p1]==nums[p1+1] && p1<p2 && p2>i && p1<n){
                        ++p1;
                    }
                    ++p1;
                }
                else if(nums[p1]+nums[p2] > target){
                    --p2;
                }
                else if(nums[p1]+nums[p2]<target){
                    ++p1;
                }
            }
        }
        return ans;
    }
};
