class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0;i<s.length();i++){
            if((int)st.size()>0){
                char ch = st.top();
                if(s[i]=='[' || s[i]=='(' || s[i]=='{')
                st.push(s[i]);
                else if((ch=='[' && s[i]==']') || (ch=='{' && s[i]=='}') || (ch=='(' && s[i]==')'))
                {
                    st.pop(); continue;
                }
                else{
                    st.push(s[i]);
                }
            }
            else st.push(s[i]);
        }
        if((int)st.size() >0) return false;
        else return true;
    }
};
