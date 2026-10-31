class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n =s.length();
        if(n<=1) return n;
        int r=0,l=0,ans=1;
        unordered_map<char,int> m;
        // m[s[0]] = 1;
        for(int r=0;r<n;r++){
            if(m.count(s[r])) {
                l = max(l, m[s[r]] + 1);
            }
            m[s[r]] = r;
            ans = max(ans,r-l+1);
            
        }
        return ans;
    }
};
