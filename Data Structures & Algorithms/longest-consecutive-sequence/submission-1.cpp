class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        for(auto num : nums) m[num] = 1;
        
        for(auto& [key,value] : m){
            if(m.count(key-1)) continue;
            int val = key;
            int last_value = value;
            while(m.count(val+1)){
                m[val+1]+=last_value;
                last_value = m[val+1];
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
