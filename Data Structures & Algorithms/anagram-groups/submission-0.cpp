class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int m = strs.size();

        unordered_map <string,vector<string>> map;
        for(int i=0;i<m;i++){
            vector<int> v(26,0);

            for(auto c: strs[i]){
                int val = c - 'a';
                v[val]+=1;
            }

            string key = "";
            for(int j=0;j<v.size();j++){
                key += ","+to_string(v[j]);
            }

            map[key].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto& [key,value] : map){
            ans.push_back(value);
        }
        return ans;
    }
};
