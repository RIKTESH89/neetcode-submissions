class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int n = tokens.size();
        for(int i=0;i<n;i++){
            if(tokens[i]=="+"){
                int val2 = s.top(); s.pop();
                int val1 = s.top(); s.pop();
                int ans = val1 + val2;
                s.push(ans);
            }
            else if(tokens[i]=="-"){
                int val2 = s.top(); s.pop();
                int val1 = s.top(); s.pop();
                int ans = val1 - val2;
                s.push(ans);
            }
            else if(tokens[i]=="*"){
                int val2 = s.top(); s.pop();
                int val1 = s.top(); s.pop();
                int ans = val1 * val2;
                s.push(ans);
            }
            else if(tokens[i]=="/"){
                int val2 = s.top(); s.pop();
                int val1 = s.top(); s.pop();
                int ans = val1 / val2;
                s.push(ans);
            }
            else{
                int val = stoi(tokens[i]);
                s.push(val);
            }
        }
        return s.top();
    }
};
