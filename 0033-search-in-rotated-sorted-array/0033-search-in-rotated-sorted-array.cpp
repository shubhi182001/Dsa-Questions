class Solution {
public:
    int findTarget(vector<int>& nums, int n, int p, int t){
        if(t>=nums[p] && t<=nums[n-1]){
            int s = p;
        int e = n-1;
        int mid = s+(e-s)/2;
        while(s<=e){
            if(nums[mid] == t){
                return mid;
            }
            else if(nums[mid]<t){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
            return -1;
        }
        else if(t>=nums[0] && t<=nums[p-1]){
            int s = 0; 
            int e = p-1;
            int mid = s+(e-s)/2;
            while(s<=e){
                if(nums[mid] == t){
                    return mid;
                }
            else if(nums[mid]<t){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
            return -1;
        }
        return -1;  
    }
    int findPivot(vector<int>& nums, int n){
        int s = 0; 
        int e = n-1;
        int mid = s+(e-s)/2;
        while(s<e){
            if(nums[mid] >= nums[0]){
                s = mid+1;
            }
            else{
                e = mid;
            }
            mid = s+(e-s)/2;
        }
        return s;
    }
    int search(vector<int>& nums, int target) {
        if(nums.size() == 1){
            if(nums[0] == target){
                return 0;
            }
            else{
                return -1;
            }
        }
        int pivot = findPivot(nums, nums.size());
        cout<<pivot;
        return findTarget(nums, nums.size(), pivot, target);
    }
};