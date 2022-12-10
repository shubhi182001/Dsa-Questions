class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(auto i : nums){
            sum = sum + i;
        }
        int lsum = 0;
        for(int i = 0; i< n; i++){
            sum = sum-nums[i];
            if(sum == lsum){
                return i;
            }
            lsum = lsum + nums[i];
        }
        return -1;
        
    }
};