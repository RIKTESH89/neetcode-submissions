class Solution {
public:
    string minWindow(string s, string t) {
        int sl = s.length();
        int tl = t.length();

        unordered_map<char,int> need;
        unordered_map<char,int> window;

        int have = 0, ans_start_idx = 0, ans_len = 1005, r=0,l=0;

        for(int i=0;i<tl;i++){
            need[t[i]]++;
        }
        for(r=0;r<sl;r++){
            if(need.count(s[r])){
                window[s[r]]++;
            }
            if(need.count(s[r]) && window[s[r]] == need[s[r]]) have+=1;

            while((int)need.size() == have){
                if(r-l+1 < ans_len){
                    ans_len = min(ans_len,r-l+1);
                    ans_start_idx = l;
                }
                if(need.count(s[l])){
                    window[s[l]]--;
                    if(window[s[l]]<need[s[l]]) have--;
                }
                ++l;
            }
        }
        if(ans_len == 1005) return "";
        else return s.substr(ans_start_idx, ans_len);
    }
};
