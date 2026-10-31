class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string str = "";
        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                str+= 'a'+(s[i]-'A');
            }
            else if(s[i]>='a' && s[i]<='z'){
                str+=s[i];
            }
            else if(s[i]>='0' && s[i]<='9'){
                str+=s[i];
            }
        }
        int l = str.length();
        for(int i=0;i<l/2;i++){
            if(str[i]!=str[l-1-i]) return false;
        }
        return true;
    }
};
