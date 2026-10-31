class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for( auto str:strs){
            s+=to_string(str.size())+"#"+str;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> v;
        for(int i=0;i<s.length();){
            int j=i;
            while(j<s.length() && s[j]!='#'){
                ++j;
            }
            int len = stoi(s.substr(i,j-i));
            i=j+1;
            string str = s.substr(i,len);
            i = i+len;
            v.push_back(str);
        }
        return v;
    }
};
