class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        for(auto num : nums) m[num] = 1;
        
        for(auto& [key,value] : m){
            int val = key;
            while(m.count(val+1)){
                m[val+1]+=1;
                ++val;
            }
        }
        int ans = 0;
        for(auto& [key,value]: m){
            ans = max(ans,value);
        }
        return ans;
    }
};
