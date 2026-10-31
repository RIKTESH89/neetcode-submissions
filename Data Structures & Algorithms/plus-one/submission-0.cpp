class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]+1>9) digits[i]=0;
            else{
                digits[i]+=1;
                break;
            }
        }
        vector<int> ans;
        if(digits[0]==0){
            ans.push_back(1);
            for(auto it:digits) ans.push_back(it);
            return ans;
        }
        return digits;
    }
};
