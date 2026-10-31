class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int l=0,r=0,ans=0;
        int maxm = 0;
        unordered_map<char,int> m;
        for(r=0;r<n;r++){
            m[s[r]]+=1;
            maxm = max(maxm, m[s[r]]);
            if((r-l+1) - maxm > k){
                m[s[l]]-=1;
                ++l;
            }
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};
