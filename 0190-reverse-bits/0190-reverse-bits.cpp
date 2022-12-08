class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for(int i = 0; i<32; i++){
            int l = n&1;
            int reverse = l<<(31-i);
            res = res | reverse;
            n= n>>1;
        }
        return res;
    }
};