class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int currend = 0;
        int farthest = 0;
        int jumps = 0;
        
        for(int i=0;i<n-1;i++){
            farthest = max(farthest, i + nums[i]);
            if(i==currend){
                currend = farthest;
                jumps++;
            }
        }
        return jumps;
    }
};
