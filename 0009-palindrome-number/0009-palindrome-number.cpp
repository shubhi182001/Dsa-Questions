class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int b = 0; 
        int e = s.length() -1;
        while(b<=e){
            if(s[b]!=s[e]){
                return false;
            }
            b++;
            e--;
        }
        return true;
        
    }
};