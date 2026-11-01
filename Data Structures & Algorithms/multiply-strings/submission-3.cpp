class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int n1 = num1.length(),n2 = num2.length();
        bool leadingzero = true;
        vector<int> ans(n1+n2,0);
        for(int i=0;i<n1;i++){
            int carry = 0;
            for(int j=0;j<n2;j++){
                int a = num1[i]-'0',b = num2[j]-'0';
                int mul = a*b + carry + ans[i+j];
                ans[i+j] = mul%10;
                carry = mul/10;
            }
            if(carry>0) {
                ans[i+n2] += carry;
            }
        }
        reverse(ans.begin(),ans.end());
        string fans= "";
        for(auto it:ans){
            if(it == 0 && leadingzero) continue;
            leadingzero = false;
            fans.push_back(it+'0');
        }
        return fans;
    }
};
