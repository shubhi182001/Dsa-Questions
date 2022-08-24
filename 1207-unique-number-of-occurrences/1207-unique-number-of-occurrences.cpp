class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        unordered_map<int, int> s;
        for(int i = 0; i<arr.size(); i++){
            m[arr[i]]++; 
        }
        for(auto x : m){
            s[x.second]++;
        }
        for(auto x : s){
            if(x.second>1){
                return false;
            }
        }
        
        return true;
    }
};