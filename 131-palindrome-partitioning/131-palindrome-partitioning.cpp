class Solution {
public:
    bool isPalindrome(string s, int start, int end){
        while(start<=end){
            if(s[start++] != s[end--]){
                return false;
            }
        }
        return true;
    }
    void solve(string s, int index, vector<string> &substring, vector<vector<string>> &ans){
        if(index == s.size()){
            ans.push_back(substring);
            return;
        }
        for(int i = index; i<s.size() ; i++){
            if(isPalindrome(s, index, i)){
                substring.push_back(s.substr(index, i-index + 1));
                solve(s, i+1,substring, ans);
                substring.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> substring;
        solve(s, 0, substring, ans);
        return ans;
    }
};