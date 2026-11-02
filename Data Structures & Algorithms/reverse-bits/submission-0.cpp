class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int n1 = 32;
        int res = 0;
        while(n1--){
            int bit = n&1;
            res = res<<1;
            res = res | bit;
            n=n>>1;
        }
        return res;
    }
};
