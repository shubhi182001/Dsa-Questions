class Solution {
public:
    int lastOccurence(vector<int>& nums, int n, int k){
        int s = 0; 
        int e = n-1;
        int mid = s+(e-s)/2;
        int value = -1;
        while(s<=e){
            if(nums[mid] == k){
                value = mid;
                s = mid+1;
            }
            else if(nums[mid]<k){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return value;
    }
    
    int firstOccurence(vector<int>& nums, int n, int k){
        int s = 0; 
        int e = n-1;
        int mid = s+(e-s)/2;
        int value = -1;
        while(s<=e){
            if(nums[mid] == k){
                value = mid;
                e = mid-1;
            }
            else if(nums[mid]<k){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return value;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        int first = firstOccurence(nums, n , target);
        int last = lastOccurence(nums, n, target);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};