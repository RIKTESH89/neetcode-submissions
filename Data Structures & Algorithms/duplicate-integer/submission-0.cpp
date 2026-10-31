class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        
        for (auto num: nums){
            m[num] +=1;
            if(m[num] >1) return true;
        }
        return false;
    }
};