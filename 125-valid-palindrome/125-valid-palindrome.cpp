class Solution {
private:
    bool check(char ch){
        if((ch>='a'&& ch<='z')||(ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return true;
        }
        return false;
    }
    char lowerCase(char ch){
        if(ch>='a' && ch<='z'){
            return ch;
        }
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
public:
    bool isPalindrome(string s) {
        string temp;
        for(int j = 0; j<s.length(); j++){
            if(check(s[j])){
                temp.push_back(s[j]);
            }
        }
        for(int j =0 ; j<temp.length() ;j++){
            temp[j] = lowerCase(temp[j]);
        }
        int st = 0;
        int en = temp.length()-1;
        while(st<en){
            if((temp[st])!= temp[en]){
                return false;
            }
            else{
                st++;
                en--;
            }
        }
        return true;
    }
};