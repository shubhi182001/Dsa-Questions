//Same as Book Allocation Problem:
class Solution {
public:
    bool isPossible(vector<int>& weights, int days, int mid){
        int count = 1;
        int dayCount = 0;
        for(auto a : weights){
            if(a+dayCount <= mid){
                dayCount += a;
            }
            else{
                count++;
                if(count>days || a>mid){
                    return false;
                }
                dayCount = a;
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s = 0; 
        int sum = 0;
        for(auto a: weights){
            sum = sum +a;
        }
        int e = sum;
        int ans = -1;
        int mid = s+(e-s)/2;
        while(s<=e){
            if(isPossible(weights, days, mid)){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
};