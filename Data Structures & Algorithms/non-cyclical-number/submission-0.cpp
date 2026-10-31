class Solution {
public:
    bool isHappy(int n) {
        vector<int> v(1001,-1);

        while(true){
            int num = n;
            int val = 0;
            while(num>0){
                val+=(num%10)*(num%10);
                num/=10;
            }
            if(val==1) return true;
            if(v[val]!=-1) return false;
            v[val]=1;
            n=val;
        }
        return false;
    }
};
