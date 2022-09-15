class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right =height.size()-1, l_max = 0, r_max = 0 , ans = 0;
        while(left<right){
            if(height[left]<height[right]){
                l_max = max(l_max, height[left]);
                ans += l_max - height[left];
                left++;
            }
            else{
                r_max = max(r_max, height[right]);
                ans += r_max - height[right];
                right--;
            }
        }
        return ans;
    }
};