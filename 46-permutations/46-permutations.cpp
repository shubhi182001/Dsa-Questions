class Solution {
private:
    void recurPermute(int index,vector<int>& nums, vector<vector<int>>& ans){
        // if(ds.size() == nums.size()){
        //     ans.push_back(ds);
        //     return;
        // }
        if(index ==nums.size()){
            ans.push_back(nums);
        }
        for(int i =index ;i<nums.size(); i++){
            // if(!freq[i]){
            //     ds.push_back(nums[i]);
            //     freq[i] = 1;
            //     recurPermute( nums, ans, ds, freq );
            //     freq[i] = 0;
            //     ds.pop_back();
            // }
            swap(nums[index], nums[i]);
            recurPermute(index+1, nums, ans);
            swap(nums[index], nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        // vector<int> ds;
        // int freq[nums.size()];
        // for(int i = 0; i<nums.size(); i++){
        //     freq[i] = 0;
        // }
        recurPermute(0,nums, ans );
        return ans;
    }
};